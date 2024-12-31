#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

//push is not applicable in set
//Set --> store data is unique and sorted
void useset(){
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.emplace(10);
    s.emplace(30);
    s.insert(15);
    s.emplace(12);

    for(auto j:s) cout<<j<<" ";
    cout<<endl;

    //iterator
    set<int>::iterator it = s.find(15); //iterate 15
    set<int>::iterator it2 = s.find(1); //iterate next to larger element 
    set<int>::iterator it3 = s.find(50); //iterate next to larger element
    auto it4=s.lower_bound(20); //iterate argument element if present otherwise present to larger element than argument
    auto it5=s.lower_bound(17);
    auto it6=s.upper_bound(20); //iterate largest element than argument
    cout<<*(it)<<" "<<*(it2)<<" "<<*(it3)<<" "<<*(s.end())<<" "<<*(it4)<<" "<<*(it5)<<" "<<*(it6)<<endl;

    cout<<s.count(12)<<endl;//1 if present 0 if not present
    //erase
    s.erase(10);//delet 10
    s.erase(it); //delete 15 
    s.erase(s.find(12),s.find(30)); //delete from 12 to previoue element form 30
    for(auto j:s) cout<<j<<" ";
    cout<<endl;

    cout<<s.count(12);//1 if present 0 if not present
}  //time complexity is O(logn)

//Multiset --> store in sorted oder but not unique 
void usemultiset(){
    multiset<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.emplace(1);
    s.insert(5);
    s.emplace(3);
    for(auto j:s) cout<<j<<" ";
    cout<<endl;

    cout<<s.count(1)<<endl;//count no of time argument element is present

    s.erase(s.find(1));//delete only 1 once
    cout<<s.count(1)<<endl;//count no of time argument element is present
    s.erase(1);//delete all 1
    cout<<s.count(1)<<endl;//count no of time argument element is present
} //time complexity is O(logn)

// Unordered set--> store in random order but unique
// available in different library name unordered_set
void useunorderedset(){
    unordered_set<int> s;
    s.insert(1);
    s.emplace(3);
    s.insert(1);
    s.insert(5);
    s.insert(11);
    s.insert(3);
    s.insert(2);
    for(auto j:s) cout<<j<<" ";
    cout<<endl;

    //lower bound and upper bound not work
    //rest all function are same
}// time complexity is O(1)

int main(){
    //useset();
    //usemultiset();
    useunorderedset();
}