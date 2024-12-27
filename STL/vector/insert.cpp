#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={10,15,21,19};

    v.insert(v.begin(),300); //insert 300 at the beginning of the vector
    for(int i:v) cout<<i<<" ";
    cout<<endl;
    v.insert(v.begin()+2,2,200); //insert 200 at the 3rd position of the vector 2 times
    for(int i:v) cout<<i<<" ";
    cout<<endl;
    vector<int> v2(3,100);
    v.insert(v.end(),v2.begin(),v2.end()); //insert v2 at the end of vector v
    for(int i:v) cout<<i<<" ";
}