#include<iostream>
#include<math.h>
using namespace std;

int count(int n){
    int count = 0;
    while(n > 0){
        count++;
        n/=10;
    }
    return count;
}//time complexity : O(log10 n)  
//if no of iteration depend on divison then time complexicit is logarithmic

//optimize way
int count2(int n){
    return((int)log10(n)+1);
}

int main(){
    cout<<count2(1054);
}