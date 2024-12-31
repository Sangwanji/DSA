#include<bits/stdc++.h>
using namespace std;

void crown1(int n){
    int space=2*(n-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout<<j<<" ";
        for(int j=0;j<=space;j++) cout<<"  ";
        for(int j=i;j>=1;j--) cout<<j<<" ";
        cout<<endl;
        space-=2;
    }
}

void crown2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++) cout<<j<<" ";
        for(int j=0;j<n-i;j++) cout<<" ";
        for(int j=i;j>=1;j--) cout<<j<<" ";
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    crown1(n);
}