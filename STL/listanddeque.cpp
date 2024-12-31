#include<iostream>
#include<list>
#include<deque>
using namespace std;

void listuse(){
    list<int> l;
    l.push_back(1);
    l.emplace_back(3);
    l.push_front(2);
    l.emplace_front(4);
    for(int j:l) cout<<j<<" ";
    cout<<endl;
    l.pop_front();
    for(int j:l) cout<<j<<" ";
    cout<<endl;
    //other function are similar to vector
    cout<<l.back()<<" "<<l.front()<<endl;
}
void dequeuse(){
    deque<int> d;
    d.push_back(1);
    d.emplace_back(3);
    d.push_front(2);
    d.emplace_front(4);
    for(int j:d) cout<<j<<" ";
    cout<<endl;
    d.pop_front();
    for(int j:d) cout<<j<<" ";
    cout<<endl;
    cout<<d.back()<<" "<<d.front()<<endl;
    //all function similar to list and vector
}
int main(){
    dequeuse();
}