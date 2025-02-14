#include<bits/stdc++.h>
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

// Burete Method 
int Sec_Max_Element(int arr[],int n){
    mergesort(arr,0,n-1);
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=arr[n-1]) return arr[i];
    }
    return -1;
}

// Better or Best Method
int bSec_Max_Element(int arr[],int n){
    int mx,smx;
    mx=arr[0];
    smx=INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>mx) mx=arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=mx && arr[i]>smx) smx=arr[i];
    }
    return smx;
}

// Optimal Method
int oSec_Max_Element(int arr[],int n){
    int max=arr[0],smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max) {
            smax=max;
            max=arr[i];
        }
        else if(arr[i]>smax && arr[i]<max){
            smax=arr[i];
        }
    }
    return smax;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<oSec_Max_Element(arr,n)<<endl;
}