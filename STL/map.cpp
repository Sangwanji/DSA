#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

//Map --> store value with key and key is unique
void usemap(){
    map<int, int> m;
    m[1] = 10;
    m[4] = 20;
    m.insert({1,13});
    m.insert({6,10});
    m.emplace(2,40);
    m.emplace(3,30);

    //accessing key and value
    for(auto j:m) cout<<j.first<<" "<<j.second<<endl;
    //accessing value by key
    cout<<m[1]<<endl;// give value of key 1
    cout<<m[9]<<endl; //give 0 as key is absent
    //accessing by iterator
    cout<<(*(m.find(4))).second<<" "<<(*(m.find(2))).first<<endl;

    //rest upperbound,lowerbound,erase..... same as prev stl
}//time complexity is O(logn)

//multimap --> store value with key and key is not unique but sorted
//m[key] is not able to use because 1 key has different value
void usemm(){
    multimap<int, int> m;
    m.insert({1,13});
    m.insert({2,9});
    m.insert({1,10});
    m.insert({2,10});
    m.insert({3,15});
    for(auto j:m) cout<<j.first<<" "<<j.second<<endl;
}

//unordered_map -->   store value with key and key is  unique but not sorted
void useuom(){
    unordered_map<int, int> m;
    m[1] = 10;
    m[4] = 20;
    m.insert({1,13});
    m.insert({6,10});
    m.emplace(2,40);
    m.emplace(3,30);
    for(auto j:m) cout<<j.first<<" "<<j.second<<endl;
    //difference is same as difference between unordered list and list 
}

int main(){
    //usemap();
    //usemm();
    useuom();
}