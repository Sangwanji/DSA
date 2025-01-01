#include<bits/stdc++.h>
using namespace std;

void printname(string s,int n){
    if(n==0) return;
    cout<<s<<endl;
    printname(s,n-1);
}

int main(){
    string s;
    getline(cin,s);
    int n;
    cin>>n;
    printname(s,n);
}