#include<bits/stdc++.h>
using namespace std;

//Bruete -> go on each element and count no of element consecutive to that element and store max size

//Better -> Sorting and see the largest size of consecutive element
int blargestseq(vector<int> &arr){
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int maxs = 1, curr =0,last=INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i]-1 == last){
            curr++;
            last=arr[i];
        }
        else if (arr[i]!=last){
            curr = 1;
            last=arr[i];
        }
        maxs=max(maxs,curr);
    }
    return maxs;
}

//Optimal ->  store in set and then find the largest size of consecutive element
int olargestseq(vector<int> &nums){
    unordered_set<int> s;
        int mxsize=0;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        for(auto it: s){
            if(s.find(it-1)==s.end()){
                int temp=it,size=0;
                while(s.find(temp)!=s.end()){
                    size++;
                    temp++;
                }
                mxsize=max(mxsize,size);
            }
        }
        return mxsize;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    cout << olargestseq(arr) << endl;
}