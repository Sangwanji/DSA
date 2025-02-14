#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(int arr[],int n,int arr2[],int m){
        int i=0,j=0;
        vector<int> v;
        while(i<n && j<m){
            if(arr[i]==arr2[j]){
                v.push_back(arr[i]);
                i++;
                j++;
                continue;
            }
            if(arr[i]<arr2[j]) i++;
            else j++;
        }
        return v;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int m;
    cin>>m;
    int b[n];
    for(int i=0;i<n;i++) cin>>b[i];
    vector<int> v(intersection(a,n,b,m));
    for(auto it:v) cout<<it<<" ";
}