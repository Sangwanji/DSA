#include<bits/stdc++.h>
using namespace std;

//burette 
// store in other list and then again place in start of array and make other element 0
    void bZeroAtLast(int arr[],int n){
        vector<int> v;
        for(int i=0;i<n;i++){
           if(arr[i]!=0) v.push_back(arr[i]);
        }
        int nzero=v.size();
        for(int i=0;i<nzero;i++) arr[i]=v[i];
        for(int i=nzero;i<n;i++) arr[i]=0;
    }
//Optimal
//two pointer approach
    void oZeroAtLast(int arr[],int n){
        int i;
        for(int j=0;j<n;j++){
            if(arr[j]==0){
                i=j;
                break;
            }
        }
        for(int j=i+1;j<n;j++){
            if(arr[j]!=0){
                swap(arr[j],arr[i]);
                i++;
            }
        }
    }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    //bZeroAtLast(arr,n);
    oZeroAtLast(arr,n);
    for(int j:arr) cout<<j<<" ";
}