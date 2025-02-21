// Element greater than N/2
#include<bits/stdc++.h>
using namespace std;

//Brute -> count freq of each element by iterating at each pair
// make it better by iterating till n/2 and j from i
bool ismajor(int arr[],int n){
    int count;
    for(int i=0;i<n/2+1;i++){
        count =0;
        for(int j=i;j<n;j++){
            if(arr[j]==arr[i]) count++;
        }
        if(count>(n/2)) return true;
    }
    return false;
}// TC->O(n^2) SC->O(1)

//Better -> count freq of each element by iterating at each pair and store in map
//using hashmap
bool bismajor(int arr[],int n){
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto it:mp){
        if(it.second>(n/2)) return true;
    }
    return false;
}// TC-> O(n) or O(nlogn) SC->O(n)

//Optimal 
//Moore's Voting Algorithm
int oismajor(int arr[],int n){
    int cnt=0,maj;
    for(int i=0;i<n;i++){
        if(cnt==0){
            maj=arr[i];
        }
        if(maj==arr[i]) cnt++;
        else cnt--;
    }
    int cnt2=0;
    for(int i=0;i<n;i++){
        if(maj==arr[i]) cnt2++;
    }
    if(cnt2>n/2) return maj;
    else return -1;
}// TC->O(2n)=>O(n) SC->O(1)

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<boolalpha<<ismajor(arr,n)<<endl;
    cout<<boolalpha<<bismajor(arr,n)<<endl;
    cout<<oismajor(arr,n);

}