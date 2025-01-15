#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){
    for(int j=1;j<n;j++){
        for(int i=0;i<n-j;i++){
            if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
        }
    }
}

//optimize by checking wheater a swap take place if not then it means array is sorted so break the loop
void optimalbs(int arr[],int n){
    for(int j=1;j<n;j++){
        int key=0;
        for(int i=0;i<n-j;i++){
            if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            key=1;
        }
        }
        if(key==0) break;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    //bubblesort(arr,n);
    optimalbs(arr,n);
    for(int j:arr) cout<<j<<" ";
}