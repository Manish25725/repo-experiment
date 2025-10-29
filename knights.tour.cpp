#include<bits/stdc++.h>
using namespace std;

int dx[8] = {+2, +2, -2, -2, +1, -1, +1, -1};
int dy[8] = {+1, -1, +1, -1, +2, +2, -2, -2};

bool isSafe(vector<vector<int>>& grid,int n,int i,int j){
    return i>=0 && j>=0 && i<n && j<n && grid[i][j]==-1;
}


void display(vector<vector<int>>& grid,int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) cout<<grid[i][j]<<" ";
        }
        return;
}

void f(vector<vector<int>>& grid,int i,int j,int n,int count){
        if(count==n*n-1){
            grid[i][j]=count;
            display(grid,n);
            grid[i][j]=-1;
            return;
        }
        
        for(int k=0;k<8;k++){
            if(isSafe(grid,n,i+dx[k],j+dy[k])){
                grid[i][j] = count;
                f(grid,i+dx[k],j+dy[k],n,count+1);
                grid[i][j]=-1;
            }
        }
}

void knightour(int n,int i,int j){
    vector<vector<int>> grid(n,vector<int> (n,-1));
    f(grid,i,j,n,0);
    
}
int main(){
    int n;
    cin>>n;
    knightour(n,0,0);
    return 0;
}