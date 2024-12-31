// print alphabet triangle in rev oder
// C 
// C B
// C B A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(char j='A'+(n-1);j>='A'+(i-1);j--) cout<<j<<" ";
        cout<<endl;
    }
}