#include<bits/stdc++.h>
using namespace std;

// Burete Method
int bRemove_Duplicate(int arr[],int n){
    set<int> p;
    for(int i=0;i<n;i++){
        p.insert(arr[i]);
    }
    auto it=p.begin();
    int k=p.size();
    for(int i=0;i<n;i++){
        if(it!=p.end()){ 
            arr[i]=*it;
            it++;
        }
        else arr[i]=0;
    }
    return k;
}

// Optimal Method
// Use two pointer approach
int oRemove_Duplicate(int arr[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=arr[i]){
            i++;
            arr[i]=arr[j];
        }
    }
    for(int j=i+1;j<n;j++) arr[j]=0;
    return i+1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<oRemove_Duplicate(arr,n)<<endl;
    for(auto j: arr) cout<<j<<" ";

}