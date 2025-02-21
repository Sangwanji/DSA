#include<bits/stdc++.h>
using namespace std;

//Brute -> compare element with all element in right
vector<int> leader(int arr[],int n){
    vector<int> ans;
    for(int i=0;i<n;i++){
        bool key=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]<=arr[j]) key=0;
        }
        if(key) ans.push_back(arr[i]);
    }
    return ans;
}// TC->O(n^2) SC->O(n)

//Optimal -> run loop from reverse and store max element
vector<int> oleader(int arr[],int n){
    vector<int> ans;
    int max=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>max){
            max=arr[i];
            ans.push_back(arr[i]);
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}// TC->O(n) SC->O(n)


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> ans=oleader(arr,n);
    for(auto it: ans) cout<<it<<" ";
}