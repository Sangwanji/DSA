#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

void usingmap(int arr[],int n){
    map<int,int> m;
    for(int i=0;i<n;i++) m[arr[i]]++;
    int b;
    cin>>b;
    while(b--){
        int x;
        cin>>x;
    cout<<m[x]<<endl;
    }
}

void usingupomap(int arr[],int n){
    unordered_map<int,int> m;
    for(int i=0;i<n;i++) m[arr[i]]++;
    int b;
    cin>>b;
    while(b--){
        int x;
        cin>>x;
    cout<<m[x]<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    
    usingmap(arr,n);
    usingupomap(arr,n);
}