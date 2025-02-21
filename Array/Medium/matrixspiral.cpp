#include<bits/stdc++.h>
using namespace std;

void  spiralprint(vector<vector<int>> &matrix){
    int top=0,left=0,right=matrix[0].size()-1,bottom=matrix.size()-1;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                cout<<matrix[top][i]<<" ";
            }
            top++;
            for(int i=top;i<=bottom;i++){
                cout<<matrix[i][right]<<" ";
            }
            right--;
            if(top<=bottom){
            for(int i=right;i>=left;i--){
                cout<<matrix[bottom][i]<<" ";
            }
            bottom--;
            }
            if(left<=right){
            for(int i=bottom;i>=top;i--){
                cout<<matrix[i][left]<<" ";
            }
            left++;
        }
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
    spiralprint(v);
}
