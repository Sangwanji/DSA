#include<bits/stdc++.h>
using namespace std;

int HCF(int n, int m){
    int fac=1;
    for(int i=2; i<=min(n,m); i++){
        if(n%i==0 && m%i==0){
            fac=i;
        }
    }
    return fac;
}// time complexicity is min(n,m)

//improve 
int HCF2(int n, int m){
    int fac;
    for(int i=min(n,m); i>=1; i--){
        if(n%i==0 && m%i==0){
            fac=i;
            break;
        }
    }
    return fac;
}

//Euclidean algorithm
int HCF3(int n, int m){
    while(n>0 && m>0){
        if(n>m) n=n%m;
        else m=m%n;
    }
    if(n==0) return m;
    else return n;
}// time complexicity is O(logphi(min(n,m)))


int main(){
    cout<<HCF3(5,15);
}