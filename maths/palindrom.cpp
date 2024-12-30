#include<iostream>
using namespace std;

int rev(int n){
    int rev = 0;
    while(n != 0){
        rev=rev*10+n%10;
        n=n/10;
    }
    return rev;
} 

int main(){
    int n;
    cin>>n;
    if(n==rev(n)) cout<<"Palindrom";
    else cout<<"Not a Palindrom";
}