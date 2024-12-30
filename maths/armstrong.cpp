#include<iostream>
#include<cmath>
using namespace std;

int csum(int n){
    int sum = 0;
    while (n!=0)
    {
        sum+= ((n%10)*(n%10)*(n%10));
        n/=10;
    }
    return sum;
} 

int main(){
    int n;
    cin>>n;
    if(n== csum(n)) cout<<"armstrong number";
    else cout<<"not an armstrong number";
}