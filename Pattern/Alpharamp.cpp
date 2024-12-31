// Triangle of alphabet with Same alphabet in a row
#include<bits/stdc++.h>
using namespace std;

void m1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++) cout<<char('A'+i)<<" ";
        cout<<endl;
    }
}

void m2(int n){
    for(char i='A';i<'A'+n;i++){
        for(int j='A';j<=i;j++) cout<<i<<" ";
        cout<<endl;
    }
}

int main(){
    int n;
    cin >> n;
    //m1(n);
    m2(n);
}