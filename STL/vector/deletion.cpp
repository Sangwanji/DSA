#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={12,16,18,17,19,20};
    // use to delete the element at index 1
    v.erase(v.begin()+1);
    for(int j:v){
        cout<<j<<" ";
    }
    cout<<endl;
    //use to delete the element at index 1 to index 2
    v.erase(v.begin()+1,v.begin()+3);
    for(int j:v){
        cout<<j<<" ";
    }
}