#include<bits/stdc++.h>
using namespace std;

//burette approach
int bmissingnumber(int arr[],int n){
    for(int i=0;i<=n;i++){
        bool key=0;
        for(int j=0;j<n;j++){
            if(i==arr[j]) {
                key=1;
                break;
            }
        }
        if(key==0) return i;
    }
}//TC -> O(n^2)

//better
//Use hash
int btmissingnumber(int arr[],int n){
    int hash[n+1];
    for(int i=0;i<n;i++){
        hash[arr[i]]=1;
    }
    for(int i=0;i<=n;i++){
        if(hash[i]!=1) return i;
    }
}//TC->O(2n) SC->O(n)

//best
//find sum from 1 to n then subtract sum of array from it 
int bestmissingnumber(int arr[],int n){
    int sum=(n*n+n)/2;
    int sumarr=0;
    for(int i=0;i<n;i++) sumarr+=arr[i];
    return sum-sumarr;
}

//optimal better from sum because if N is large then sum can not be store in int data type
//use XOR
int optmissingnumber(int arr[],int n){
    int XOR=0;
    for(int i=0;i<=n;i++) XOR^=i;
    for(int i=0;i<n;i++) XOR^=arr[i];
    return XOR;
}//TC->O(2n) 

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<optmissingnumber(arr,n)<<endl;

}