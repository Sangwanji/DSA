#include<iostream>
#include<algorithm>
using namespace std;

// __builtin_popcount(n) use to count no of 1 in a binary

int main(){
    int n;
    cin>>n;
    int cnt=__builtin_popcount(n);
    cout<<cnt<<endl;
    long long j;
    cin>>j;
    int cnt2=__builtin_popcountll(j); // for long long we use ll after count
    cout<<cnt2;
}