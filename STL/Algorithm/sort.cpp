#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<utility>
using namespace std;

bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.first<p2.first) return true;
    if(p1.first>p2.first) return false;
    if(p1.second>p2.second) return true;
    return false;
}

// for custom sorting like in pair first element in increasing oder if first element is same the in decreasing oder of second element
int sortpair(pair<int,int> arr[]){
    sort(arr,arr+5,comp);//comp is a boolean function which tell the condition in which you want to sort
}

int main(){
    int arr[]={10,11,13,51,15,21};
    vector<int> v={10,31,11,51,21,13,19};
    list<int> l={10,11,13,51,15,21};
    pair<int,int> arrp[]={{11,51},{6,21},{11,16},{12,16},{6,31}};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,greater<int>()); //sort in decreasing oder if greater<int>() is use 
    for (int j:arr) cout<<j<<" ";
    cout<<endl;
    sort(v.begin(),v.end()); //sort in increasing order from v.begin()to v.end()
    for (auto j:v) cout<<j<<" ";
    cout<<endl;
    l.sort(); //for list we can use sort function liked this
    for (auto j:l) cout<<j<<" ";
    cout<<endl;
    sortpair(arrp);
    for(auto j:arrp) cout<<j.first<<" "<<j.second<<endl;

}