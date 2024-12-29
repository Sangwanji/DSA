#include<iostream>
#include<queue>
using namespace std;

//Maximum Heap --> store the maximum element at the top of the heap
//Time Complexity: O(log n) for insertion and deletion
void mxpq(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.emplace(13);
    pq.emplace(10);
    pq.emplace(15);
    int n=pq.size();
    for(int i =0;i<n;i++){
        cout<<pq.top()<<endl;
        pq.pop();
    }
}

//Minimum Heap --> store the minimum element at the top of the heap only difference we use <int,vector<int>,greater<int>> in place of <int>
void mnpq(){
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(10);
    pq.push(20);
    pq.emplace(13);
    pq.emplace(10);
    pq.emplace(15);
    int n=pq.size();
    for(int i =0;i<n;i++){
        cout<<pq.top()<<endl;
        pq.pop();
    }
}

int main(){
    mnpq();
}