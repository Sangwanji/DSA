#include<bits/stdc++.h>
using namespace std;

// bruete -> use 3 loop to solve the problem

//better -> use 2 loop to solve it
int countsubarray(vector<int> &nums,int k){
    int sum,count=0;
        for(int i=0;i<nums.size();i++){
            sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                if(sum==k) count++;
            }
        }
        return count ;
}

//optimal -> use prefix sum to solve the problem
// Not do by myself
int ocountsubarray(vector<int> &arr,int k){
    int n = arr.size(); 
    map<int,int> mpp;
    int preSum = 0, cnt = 0;

    mpp[0] = 1; // Setting 0 in the map.
    for (int i = 0; i < n; i++) {
        // add current element to prefix Sum:
        preSum += arr[i];

        // Calculate x-k:
        int remove = preSum - k;

        // Add the number of subarrays to be removed:
        cnt += mpp[remove];

        // Update the count of prefix sum
        // in the map.
        mpp[preSum] += 1;
    }
    return cnt;
}

int main(){
    int n,k;
    cin >> n>> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin>>a[i];
    cout<<ocountsubarray(a,k)<<endl;
}