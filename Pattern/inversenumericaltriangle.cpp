#include<bits/stdc++.h>
using namespace std;

void pattern6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n+1-i);j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern6(n);
}