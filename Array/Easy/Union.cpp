#include<bits/stdc++.h>
using namespace std;

// Burette 
    set<int> bUnion(int arr[],int n,int arr2[],int m){
        set<int> s;
        for(int i=0;i<n;i++) s.insert(arr[i]);
        for(int i=0;i<m;i++) s.insert(arr2[i]);
        return s;
    }//Timecomplexity==>O((m+n)log(m+n)) Spacecomplexity==>O(m+n)
//Optimal
    vector<int> oUnion(int arr[],int n,int arr2[],int m){
        vector<int> v;
        int i,j;
        for(i=0,j=0;i<n&&j<m;){
            if(arr[i]<=arr2[j] ) {
                if(v.size()==0 || v.back()!=arr[i]){
                    v.push_back(arr[i]);
                }
                i++;
            }
            else{
                if(v.size()==0 || v.back()!=arr2[j]){
                    v.push_back(arr2[j]);
                }
                j++;
            }
        }
        while(i<n) {
            if(v.back()!=arr[i])
            v.push_back(arr[i++]);
            else
            i++;
        }
        while(j<m) {
            if(v.back()!=arr[j])
            v.push_back(arr2[j++]);
            else
            j++;
        return v;
    }
}// Time Complexity ->O(m+n) Space Complexity ->O(m+n)

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int m;
    cin>>m;
    int b[n];
    for(int i=0;i<n;i++) cin>>b[i];
    set<int> s(bUnion(a,n,b,m));
    for(auto j: s) cout<<j<<" "; 
    cout<<endl;
   vector<int> v(oUnion(a,n,b,m));
    for(int j:v) cout<<j<<" ";
}