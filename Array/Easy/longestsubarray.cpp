//length of longest subarray
#include<bits/stdc++.h>
using namespace std;

// Burette approach
int bsubarray(int arr[],int n,int k){
    int sum ,lmax=-1;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==k) lmax=max(lmax,j-i+1);
            //else if(sum>k) break; // we can use break if only positive present
        }
    }
    return lmax;
}

//optimal approach
//Using Hashing
int longestSubarray(int arr[],int n, int k){
unordered_map<int,int> mpp;
int longest=0,sum=0;
for(int i=0;i<n;i++){
    sum+=arr[i];
    if(mpp.find(sum)==mpp.end()) mpp[sum]=i;
    if(sum==k) longest=i+1;
    else{
        int rem=sum-k;
        if(mpp.find(rem)!=mpp.end()) longest=max(longest,i-mpp[rem]);
        
    }
}
return longest;
}


int main(){
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++) cin>>arr[i];
    int target;
    cin>>target;
    cout<<longestSubarray(arr,x,target)<<endl;
}