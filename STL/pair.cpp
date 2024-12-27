#include<iostream>
#include<utility>
using namespace std;

int main(){
    // pair is used to store number in a pair form 
    pair<int,int> p={3,4};
    cout<<"1st value of pair "<<p.first<<" "<<"2nd value of pair "<<p.second<<endl;
    // we can use nested pair to store multiple values
    pair<pair<int,int>,pair<int,int>> p1={{3,4},{5,6}};
    cout<<"1st value of pair one "<<p1.first.first<<" "<<"2nd value of pair one "<<p1.first.second<<endl;
    cout<<"1st value of pair two "<<p1.second.first<<" "<<"2nd value of pair two "<<p1.second.second<<endl;
    // we can use array also as variable
    pair<int,int> pair[]={{3,4},{2,5},{1,6}};
    for(int i=0;i<3;i++){
        cout<<"1st value of pair "<<i<<" "<<pair[i].first<<" "<<"2nd value of pair "<<i<<" "<<pair[i].second<<endl;
    }
    // we can take input from user in pair one by one and store different type of data in pair
    std::pair<int,char> p2;
    cin>>p2.first;
    cin>>p2.second;
    cout<<"1st value of pair "<<p2.first<<" "<<"2nd value of pair "<<p2.second<<endl;
    // if we only initialise pair and don't enter any value then it store zero by default
    std::pair<int,int> p3;
    cout<<"1st value of pair "<<p3.first<<" "<<"2nd value of pair "<<p3.second;
}