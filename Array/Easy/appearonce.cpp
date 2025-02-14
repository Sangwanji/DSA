#include<bits/stdc++.h>
using namespace std;

//Better use hashing
// best use unorderd map
//optimal
//use xor
int appearonce(int arr[],int n){
    int Xor=0;
    for(int i=0;i<n;i++){
        Xor^=arr[i];
    }
    return Xor;
} 

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<appearonce(arr,n)<<endl;
}