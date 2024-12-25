#include<bits/stdc++.h>
using namespace std;

void pattern8(int n){
    for(int i=1;i<=n;i++){
        for(int j=n-i;j<=n;j++){
            cout<<" ";
        }
        for(int k=1;k<=(n+1-i);k++){
           cout<<"* "; 
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern8(n);
}