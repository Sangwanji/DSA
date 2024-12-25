#include<bits/stdc++.h>
using namespace std;

void pattern7(int n){
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
           cout<<"* "; 
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern7(n);
}