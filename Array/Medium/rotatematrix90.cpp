#include<bits/stdc++.h>
using namespace std;

//Bruete-> store matrix in another matrix
void brotatematrix(vector<vector<int>> &matrix){
    int n=matrix.size(),m=matrix[0].size();
    vector<vector<int>> v(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            v[j][n-i-1]=matrix[i][j];
        }
    }
    matrix=v;
}

//optimal -> first transpose then reverse to rotate matrix by 90 degree clockwise
void orotatematrix(vector<vector<int>> &matrix){
    for(int i=0;i<matrix.size();i++){
        for(int j=i;j<matrix[i].size();j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<matrix.size();i++){
            reverse(&matrix[i][0],&matrix[i][matrix[i].size()]);
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
    brotatematrix(v);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
