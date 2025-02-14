#include<bits/stdc++.h>
using namespace std;

//Burette 
//make other array
    void bRotate_ByD(int arr[],int n,int nt){
        int d=nt%n;
        int arr2[d];
        for(int i=0;i<n;i++){
            arr2[i]=arr[i];
        }//Timecomplexicity==>O(n)
        for(int i=0;i<n-d;i++){
            arr[i]=arr[i+d];
        }//Timecomplexicity==>O(n-d)
        for(int i=0;i<d;i++){
            arr[n-d+i]=arr2[i];
        }//Timecomplexicity==>O(d)
    }//Timecomplexicity==>O(n+d) extraSpacecomplexicity==>O(d)

// Optimal 
    void oRotate_ByD(int arr[],int n,int nt){
        int d=nt%n;
        reverse(&arr[0],&arr[d]); //Timecomplexicity==>O(d)
        reverse(&arr[d],&arr[n]);//Timecomplexicity==>O(n-d)
        reverse(&arr[0],&arr[n]);//Timecomplexicity==>O(n)
    } //Timecomplexicity==>O(2n) Spacecomplexicity==>O(1)

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int d;
    cin>>d;
    for(int i:arr) cout<<i<<" ";
    cout<<endl;
    oRotate_ByD(arr,n,d);
    for(int i:arr) cout<<i<<" ";
}