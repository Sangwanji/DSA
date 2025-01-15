#include<bits/stdc++.h>
using namespace std;

void bs(vector<int> &arr ,int i,int n){
        if(i+1==n) return;
        if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
        bs(arr,i+1,n);
    }
void bs2(vector<int> &arr ,int n){
        if(n==0) return;
        bs(arr,0,n);
        bs2(arr,--n);
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        v.push_back(b);
    }
    bs2(v,v.size());
    for(auto j: v) cout<<j<<" ";
}