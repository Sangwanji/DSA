#include<bits/stdc++.h>
using namespace std;

//Brute -> Use two loop and store max profit
int stock(int arr[],int n){
    int maxprofit=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]-arr[i]>maxprofit) maxprofit=arr[j]-arr[i];
        }
    }
    return maxprofit;
}// TC-> O(n^2) SC->O(1)

//Optimal -> make a record of minimum no befor each element
int ostock(int arr[],int n){
    int minimum=arr[0],maxprofit=0;
    for(int i=1;i<n;i++){
        maxprofit=max(maxprofit,arr[i]-minimum);
        minimum=min(arr[i],arr[0]);
    }
    return maxprofit;
}// TC -> O(n) SC->O(1)

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)  cin>>arr[i];
    cout<<stock(arr,n)<<endl;
    cout<<ostock(arr,n)<<endl;
}