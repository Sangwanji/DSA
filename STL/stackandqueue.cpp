#include<iostream>
#include<stack>
#include<queue>
using namespace std;

//swap,empty and size is same as list

//LIFO --> last in first out
void usestack(){ //only print the value at top of stack last value we push go on top
    stack<int> s;
    s.push(1);
    s.push(8);
    s.emplace(5);
    cout<<s.top()<<endl; //as the last value is 5 so it will print 5
    s.pop(); //now we remove 5 from top
    cout<<s.top()<<endl; // now the top value is 8 so it will print 8
}// time complexity of push pop and top is O(1)

//FIFO --> first in first out
void usequeue(){ //only print the value at front and last of queue first value we push go at front and last value we push go at last
    queue<int> q;
    q.push(3);
    q.push(7);
    q.emplace(9);
    q.emplace(1);
    cout<<q.front()<<" "; //as the first value is 3 so it will print
    q.pop(); //now we remove 3 from front
    cout<<q.front()<<" "; // now the front value is 7 so it will print
    cout<<q.back()<<" ";
}

int main(){
    //usestack();
    usequeue();
}