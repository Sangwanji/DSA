#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// min and max function give address of element
int main(){
    int arr[]={11,15,21,61,13,51};
    vector<int> v={51,21,16,18,19,13};
    cout<<(max_element(arr,arr+6))<<endl;
    cout<<*(max_element(arr,arr+6))<<endl;
    cout<<*(min_element(v.begin(),v.end()))<<endl;
    cout<<(min_element(&v[0],&v[3]))<<endl;
}