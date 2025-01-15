#include<iostream>
using namespace std;

void quicksort(int arr[],int s,int l){
    if(s>l) return;
    int i,j;
    int pivot=arr[s];
    i=s;
    j=l;
    while(i<j){
        while(arr[i]<=pivot && i<=l ){
            i++;
        }
        while(arr[j]>pivot && j>=s){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[j],arr[s]);
    quicksort(arr,s,j-1);
    quicksort(arr,j+1,l);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    for(int j: arr) cout<<j<<" ";
}