#include<bits/stdc++.h>
using namespace std;

void m1(int n){
    for(int i=1;i<=n;i++){
        int count =-1;
        for(int j=1;j<=2*(n-i);j++) cout<<" ";
        for(int j=0;j<2*i-1;j++){
            if (j >= i) {
                count--;
                cout<<char('A'+count)<<" ";
            }
            else{
                count++;
                cout<<char('A'+count)<<" ";
            }
        }
        cout<<endl;
    }
}

void m2(int n){
    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=(n-i);j++) cout<<"  ";
        for(int j=0;j<2*i-1;j++) {
            cout<<ch<<" ";
            if(j<i-1) ch++;
            else ch--;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    m2(n);
}