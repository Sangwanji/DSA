#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Create a vector of integers
    vector<int> v;
    v.push_back(1); // push 1 in vector
    v.emplace_back(2); // push 2 in vector
    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl; // Output: 1 2 garbage value

    // Create a vector of pair integers
    vector<pair<int, int>> v1;
    v1.push_back({1, 2}); // push 1,2 in vector
    v1.emplace_back(3, 4); // push 3,4 in vector
    cout<<v1[0].first<<" "<<v1[0].second<<" "<<v1[1].first<<" "<<v1[1].second<<endl; // Output: 1 2 3 4

    // Intialize vector with declaration
    vector<int> v2(5,20); // Create a vector of 5 elements with value 20
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    vector<int> v3(5); //Create a vector of 5 element with default value 0
    for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }
    cout<<endl;

    vector<int> v4(v2); // Create a vector copy of vector v2
    for(int i=0;i<v4.size();i++){
        cout<<v4[i]<<" ";
    }
    cout<<endl;

    // Increase size of v4 by push 30 in it
    v4.push_back(30);
    for(int i=0;i<v4.size();i++){
        cout<<v4[i]<<" ";
    }
    cout<<endl;
}