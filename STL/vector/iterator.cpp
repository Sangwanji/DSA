#include<iostream>
#include<vector>
using namespace std;

int main(){ 
    vector<int> v={10,15,20,30,15,18};
    cout<<v[1]<<" "<<v.at(0)<<" "<<v.front()<<" "<<v.back()<<endl; //accessing using index or front and back function

    vector<int>::iterator it=v.begin();//it pointing the address of first element(v[0])

    cout<<*(it)<<" ";
    it++;// inc the address by 1 means v[0]-->v[1]
    cout<<*(it)<<" ";
    it+=2;// inc the address by 1 means v[1]-->v[3]
    cout<<*(it)<<endl;

    it=v.end();//address just left after last element
    it--; //move operator right means it pointing the address of last element(v[5])
    cout<<*(it)<<" "<<endl;
    //for reverse iterator we need to use reverse_iterator inplace of iterator
    //for reverse operator increment and decrement of operator is also opposite mean on increment it move right and in decrement it move right
    vector<int>::reverse_iterator it2=v.rbegin();//pointing the last element (v[5])
    it2++; //move operator right means it pointing the address of second last element(v[4])
    cout<<*(it2)<<" ";
    it2=v.rend(); //address just left after first element
    it2--; //move operator right means it pointing the address of first element(v[0])
    cout<<*(it2)<<endl;

    //we can also print full vector using iterator in loop
    //print reverse vector from end to begining
    it=v.end()-1;
    while(it!=v.begin()-1){
        cout<<*(it)<<" ";
        it--;
    }
    cout<<endl;

    //auto is used to get the type of variable at compile time it automatic decide the type of variable
    for(auto it3=v.begin();it3!=v.end();it3++){
        cout<<*(it3)<<" ";
    }
    cout<<endl;

    //for each loop is also used to print vector
    //in this we give data type of variable and variable name then : arr/vector name (it will automatically print all the value of array)
    for( int it4:v){
        cout<<it4<<" ";
    }
}