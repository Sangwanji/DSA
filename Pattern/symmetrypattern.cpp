// symmetry pattern

//pattern1
// ********
// ***  ***
// **    **
// *      *
// *      *
// **    **
// ***  ***
// ********

//pattern2
// *    *
// **  **
// ******
// **  **
// *    *

//pattern3
// 0000000 
// 0111110
// 0122210
// 0123210
// 0122210
// 0111110 
// 0000000

//pattern4
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444


#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--) cout<<"* ";
        for(int j=0;j<2*i;j++) cout<<"  ";
        for(int j=n-i;j>0;j--) cout<<"* ";
        cout<<endl;
    }
    for(int i=n-1;i>=0;i--){
        for(int j=n-i;j>0;j--) cout<<"* ";
        for(int j=0;j<2*i;j++) cout<<"  ";
        for(int j=n-i;j>0;j--) cout<<"* ";
        cout<<endl;
    }
}

void pattern2(int n){
    for(int i=1;i<=n;i++){
        for(int j=i;j>0;j--) cout<<"* ";
        for(int j=0;j<2*(n-i);j++) cout<<"  ";
        for(int j=i;j>0;j--) cout<<"* ";
        cout<<endl;
    }
    for(int i=n-1;i>=0;i--){
        for(int j=i;j>0;j--) cout<<"* ";
        for(int j=0;j<2*(n-i);j++) cout<<"  ";
        for(int j=i;j>0;j--) cout<<"* ";
        cout<<endl;
    }
}

// you need to observe the pattern and see that it is a minimum distance from top,left,right and bottom
void pattern3(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int bottom =2*n-2-i;
            int left = j;
            int right = 2*n-2-j;
            cout<<min(min(top,bottom),min(right,left))<<" ";
        }
        cout<<endl;
    }
}

//you need it is n-value of pattern 3
void pattern4(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int bottom =2*n-2-i;
            int left = j;
            int right = 2*n-2-j;
            cout<<n-min(min(top,bottom),min(right,left))<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    //pattern1(n);
    //pattern2(n);
    //pattern3(n);
    pattern4(n);
}