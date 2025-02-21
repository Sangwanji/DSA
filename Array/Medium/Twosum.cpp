#include<bits/stdc++.h>
using namespace std;

// Variety 1 -> such number present or not
// Brutte Force-> Pick one number check with other
bool btwosumcheck(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target) return true;
        }
    }
    return false;
}// TC->O(n^2) SC->O(1)
// Better -> Using Hashing
//store in unordered map and check wheather target-arr[i] present or not
bool bttwosumcheck(int arr[],int n,int target){
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        int rem=target-arr[i];
        if(map.find(rem)!=map.end()){
            return true;
        }
        map[arr[i]]=i;
    }
    return false;
} // TC->O(n) SC->O(n)
//optimal -> Sort array and two pointer
bool otwosumcheck(int arr[],int n,int target){
    sort(arr,arr+n);
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==target) return true;
        if(arr[i]+arr[j]>target) j--;
        else if(arr[i]+arr[j]<target) i++;
    }
    return false;
} // TC-> O(nlogn)+O(n) SC->O(1) (if consider distorted array O(n))

//Variety 2-> return index of such number
//Brutte Force-> Similar to variety one
vector<int> btwosum(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                return {i,j};
            }
        }
    }
    return {};
}
// Optimal -> Similar to variety one better
vector<int> otwosum(int arr[],int n,int target){
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        int rem=target-arr[i];
        if(map.find(rem)!=map.end()){
            return {map[rem],i};
        }
        map[arr[i]]=i;
    }
    return {};
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int target;
    cin>>target;
    cout<<boolalpha<<bttwosumcheck(arr,n,target)<<endl;
    vector<int> v(otwosum(arr,n,target));
    for(auto it: v) cout<<it<<" ";
}