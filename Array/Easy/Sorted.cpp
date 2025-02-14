#include<bits/stdc++.h>
using namespace std;

bool decreasingArray_Check(int arr[],int n){
    bool key=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]) {
            key=false;
            break;
        } 
    }
    return key;
}

bool increasingArray_Check(int arr[],int n){
    bool key=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]) {
            key=0;
            break;
        } 
    }
    return key;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<boolalpha;
    //cout<<decreasingArray_Check(arr,n);
    cout<<increasingArray_Check(arr,n);
}