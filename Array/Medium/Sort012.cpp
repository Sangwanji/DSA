#include<bits/stdc++.h>
using namespace std;

// Burete -> Use any sorting algorithm

// Better -> count 0,1,2 and then add
void solve(int arr[],int n){
    int c0=0,c1=0,c2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) c0++;
        else if(arr[i]==1) c1++;
        else if(arr[i]==2) c2++;
    }
    for(int i=0;i<c0;i++){
        arr[i]=0;
    }
    for(int i=c0;i<c1+c0;i++){
        arr[i]=1;
    }
    for(int i=c1+c0;i<c2+c1+c0;i++){
        arr[i]=2;
    }
}

// Optimal 
// Dutch National Flag Algorithm -> 3 pointers
// low,mid,high pointer 
// 0 to low-1 -> 0
// low to mid-1 -> 1
// mid to high -> unsorted
// high+1 to n-1 -> 2
void osolve(int arr[],int n) {
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
} // TC-> O(n) SC-> O(1)

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    osolve(arr,n);
    for(auto it: arr) cout<<it<<" ";
}