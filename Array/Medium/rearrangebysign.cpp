#include<bits/stdc++.h>
using namespace std;

//Brute -> Make two data  array 
void rearrangebysign(int arr[],int n){
    vector<int> pos,neg;
    int last;
    for(int i=0;i<n;i++){
        if(arr[i]<0) neg.push_back(arr[i]);
        else pos.push_back(arr[i]);
    }
    for(int i=0;i<min(pos.size(),neg.size());i++){
        arr[2*i]=*(pos.begin()+i);
        arr[2*i+1]=*(neg.begin()+i);
        last=2*i+1+1;
    }
    if(pos.size()>neg.size()){
        for(int i=neg.size();i<pos.size();i++){
            arr[last++]=*(pos.begin()+i);
        }
    }
    else {
        for(int i=pos.size();i<neg.size();i++){
            arr[last++]=*(neg.begin()+i);
        }
    }
}// TC->O(n)+O(min(pos,neg))+O(max(pos,neg)-min(pos,neg));

// Optimal -> Three pointer(positiveINd, negativeINd, iterator)
//Only if Positive and Negative are equal
void orearrangebysign(int arr[],int n){
    int pInd=0,nInd=1,arr2[n];
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            arr2[nInd]=arr[i];
            nInd+=2;
        }
        else{
            arr2[pInd]=arr[i];
            pInd+=2;
        }
    }
    for(auto j : arr2) cout<<j<<" ";
}// TC-> O(n) SC-> O(n)

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    rearrangebysign(arr,n);
    for(auto j : arr) cout<<j<<" ";
}