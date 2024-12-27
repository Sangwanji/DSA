#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    v={10,15,16,21,20};

    cout<<v.size()<<endl; // tell the no of input in vector
    cout<<v.capacity()<<endl; // tell the no of element vector can hold with increasing it size
    cout<<v.max_size()<<endl; // tell the max no of element vector can hold with increasing it size
    v.push_back(19); //on adding one element in vector it will increase its size to double of its current size
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.pop_back();// Delete the last element
    for(int j:v) cout<<j<<" ";
    cout<<endl;
    vector<int>v2={10,15,13,12};
    v.swap(v2); //swap vector v2 and v1
    for(int j:v) cout<<j<<" ";
    cout<<endl;
    cout<<v.empty()<<endl; //give 0 if vector is not empty
    v.clear(); //clear all element from vector
    cout<<v.empty()<<" ";
    cout<<v.size()<<" ";
    cout<<v.capacity()<<endl;

    v2.clear();
    cout<<v2.empty()<<" ";
    cout<<v2.size()<<" ";
    cout<<v2.capacity()<<endl;   
}