#include<bits/stdc++.h>
using namespace std;

void prime(int n){
    bool key =0;
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            key =1;
            break;
        }
    }
    if(key==0) cout<<n<<" is  a prime number";
    else cout<<n<<" is not a prime number";
}

//optimise way
void prime2(int n){
    bool key =0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            key =1;
            break;
        }
    }
    if(key==0) cout<<n<<" is  a prime number";
    else cout<<n<<" is not a prime number";
}

int main(){
    int n;
    cin>>n;
    prime2(n);
}