#include<bits/stdc++.h>
using namespace std;

// Brute -> make 3 loop and make all subarray

// Better -> iterating at each subarray using two loop
int mxsum(int arr[],int n){
    int maxsum = INT_MIN,sum;
    for(int i = 0; i < n; i++){
        sum = 0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            maxsum=max(sum,maxsum);
        }
    }
    return maxsum;
}// TC-> O(n^2) SC-> O(1)

// Optimal -> Kadane's Algorithm
int omxsum(int arr[],int n){
    int maxsum = INT_MIN,sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxsum=max(sum,maxsum);
        if(sum<0) sum=0;
    }
    return maxsum;
}// TC-> O(n) SC-> O(1)

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<mxsum(arr,n)<<endl;
    cout<<omxsum(arr,n)<<endl;
}