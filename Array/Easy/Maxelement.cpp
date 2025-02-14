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
int bMax_Element(int arr[],int n){
    mergesort(arr,0,n-1);
    return arr[n-1];
}

// Optimal Method
int oMax_Element(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    return max;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<bMax_Element(arr,n)<<endl;
}