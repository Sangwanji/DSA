#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;//no of elements in array
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    
    //create a array hash which size equal to max element of till which you need to hashed+1
    //the max size of int array is 10^6 in main and 10^7 in global
    //pre computing
    int hash[13]={0}; //assuming max element is 12

    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    //how many number for which you need to find frequency
    int b;
    cin>>b;
    for(int i=0;i<b;i++){
        int x;
        cin>>x;
        cout<<hash[x]<<endl; //fetching   
    }
}