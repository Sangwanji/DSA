#include<bits/stdc++.h>
using namespace std;

bool rotated_sortedArray(int arr[],int n){
    bool flag=1,flag2=0;
    int i;
    for( i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]) {
            flag2=1;
            break;
        }

    }
    for(int j=i+1;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            flag=0;
        }
    }
    if(flag2==1 && arr[n-1]<arr[0] && flag==1) return flag;
    else if(flag2==1 && arr[n-1]<arr[0] && flag==1) return false;
    return flag;
 }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<boolalpha<<rotated_sortedArray(arr,n);

}