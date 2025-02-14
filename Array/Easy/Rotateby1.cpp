#include<bits/stdc++.h>
using namespace std;

// simple approach
    //Left Rotate
    void bLeft_Rotate(int arr[],int n){
        int temp = arr[0];
        for(int i=0;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
    }
    //Right Rotate
    void bRight_Rotate(int arr[],int n){
        int temp = arr[n-1];
        for(int i=n-1;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
    } //TC==> O(n) SC==>O(1)

// mine diff approach
    void mLeft_Rotate(int arr[],int n){
        for(int i=n-1;i>0;i--){
            swap(arr[0],arr[i]);
        }
    } // TC==> O(n) SC==> O(1)

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    bLeft_Rotate(arr,n);
    mLeft_Rotate(arr,n);
    for(int j: arr) cout<<j<<" ";
    cout<<endl;
    bRight_Rotate(arr,n);
    for(int j: arr) cout<<j<<" ";
    cout<<endl;
    
}