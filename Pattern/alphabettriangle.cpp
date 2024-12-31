#include<bits/stdc++.h>
using namespace std;

void m1(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++) cout<<char('A'+j)<<" ";
        cout<<endl;
    }
}

void m2(int n){
    for(int i=1;i<=n;i++){
        for(char j='A';j<'A'+i;j++) cout<<j<<" ";
        cout<<endl;
    }
}

int main(){
    int n;
    cin >> n;
    //m1(n);
    m2(n);
}