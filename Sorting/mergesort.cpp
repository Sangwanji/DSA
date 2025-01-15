#include<iostream>
using namespace std;

void merge(int arr[],int low,int mid,int high){
    int left=low;
    int right=mid+1;
    int temp[high-low+1];
    int i=0;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp[i]=arr[left];
            left++;
            i++;
        }
        else{
            temp[i]=arr[right];
            right++;
            i++;
        }
    }
    while(left<=mid){
        temp[i]=arr[left];
        left++;
        i++;
    }
    while(right<=high){
        temp[i]=arr[right];
        right++;
        i++;
    }
    for(int j=low;j<=high;j++){
        arr[j]=temp[j-low];
    }
}


void mergesort(int arr[],int low,int high){
    if(low==high) return;
    int mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    for(int j:arr) cout<<j<<" ";
}