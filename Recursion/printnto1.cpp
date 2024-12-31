#include<bits/stdc++.h>
using namespace std;

void printnto1(int n){
    if(n==0) return;
    cout<<n<<endl;
    printnto1(n-1);
}

int main(){
    int n;
    cin>>n;
    printnto1(n);
}