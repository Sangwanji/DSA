#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s="123";
    string s2="791";
    string s3="dog";
    // do{
    //     cout<<s<<endl;
    // }while(next_permutation(s.begin(),s.end())); // write all the permutation of s which is greater than S
    do{
        cout<<s2<<endl;
    }while(next_permutation(s2.begin(),s2.end())); // this loop will run till no more permutation is possible greater than tha permutation
    do{
        cout<<s3<<endl;
    }while(next_permutation(s3.begin(),s3.end())); // it will print in dictionary oder
}