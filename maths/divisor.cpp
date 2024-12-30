#include<bits/stdc++.h>
using namespace std;

void printdivisor(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0) cout<<i<<" ";
    }
}

//optimize ways to print divisors time complexicity O(sqrt(n)logn)
// by observing pattern of divisor that after sqrt(n) all divisors are repeated by n/i
void printdivisor2(int n){
    vector<int> l;
    for(int i=1;i*i<=n;i++){ //sqrt(n) time complexity
        if(n%i==0) {
            l.push_back(i);
        if(n/i!=i) l.push_back(n/i);
        }
    }
    sort(l.begin(),l.end()); //time complexicity is O(nlogn)
    for(auto j:l) cout<<j<<" ";
}


void printdivisor3(int n){
    set<int> s;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            s.insert(i);
            s.insert(n/i);
        }
    }
    for(auto j:s) cout<<j<<" ";
} // time complexicity is O(sqrt(n)logn)

int main(){
    int n;
    cin>>n;
    //printdivisor(n);
    printdivisor2(n);
    printdivisor3(n);
}