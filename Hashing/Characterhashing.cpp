#include<iostream>
#include <string>
using namespace std;

//if only lower case letter present
// int main(){
//     string s;
//     cin>>s;
//     int hash[26]={0};
//     for(int i=0;i<s.length();i++){
//         hash[s[i]-97]++;
//     }
//     int b;
//     cin>>b;
//     for(int i=0;i<b;i++){
//         char c;
//         cin>>c;
//         cout<<hash[c-'a']<<endl;
//     }
// }


//for every character
int main(){
    string s;
    cin>>s;
    int hash[256]={0};
    for(int i=0;i<s.length();i++){
        hash[s[i]]++;
    }

    int b;
    cin>>b;
    for(int i=0;i<b;i++){
        char c;
        cin>>c;
        cout<<hash[c]<<endl;
    }
}          