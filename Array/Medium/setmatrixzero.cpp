#include<bits/stdc++.h>
using namespace std;

//Bruete -> Make row and column with 0 to -1
void bsetzero(vector<vector<int>> &arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            if(arr[i][j]==0){
                for(int k=0;k<arr.size();k++){
                    arr[k][j]=-1;
                }
                for(int k=0;k<arr[i].size();k++){
                    arr[i][k]=-1;
                }
            }
        }
    }
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            if(arr[i][j]==-1){
                arr[i][j]=0;
            }
        }
    }
}

// Better -> make array for row and column and hash all zero in that
void btsetzero(vector<vector<int>> &arr){
    int n=arr.size(), m=arr[0].size();
    vector<int> row(n,1), col(m,1);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                row[i]=0;
                col[j]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]==0 || col[j]==0){
                arr[i][j]=0;
            }
        }
    }
}// TC->O(m*n) //SC->O(m+n)

//Optimal-> use first row and column as hash row and column
void osetzero(vector<vector<int>> &arr){
    int n=arr.size(), m=arr[0].size();
    int firstcol=1;
    for(int i=0;i<n;i++){
        if(arr[i][0]==0) firstcol=0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0 && j!=0){
                arr[i][0]=0;
                arr[0][j]=0;
            }
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if((arr[i][0]==0 || arr[0][j]==0) && j!=0){
                arr[i][j]=0;
            }
        }
    }
    for(int j=0;j<m;j++){
        if(!arr[0][0]) arr[0][j]=0;
    }
    for(int i=0;i<n;i++){
        if(!firstcol) arr[i][0]=0;
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    osetzero(v);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}