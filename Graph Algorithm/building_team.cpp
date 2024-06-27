#include<bits/stdc++.h>
using namespace std;
bool dfs(int i,vector<vector<int>>&adj,vector<int>&vis,int c,int p,vector<int>&col){
    vis[i]=1;
    col[i]=c;
    for(auto it:adj[i]){
        if(it==p)continue;
        if(col[it]==0){
            if(!dfs(it,adj,vis,c^3,i,col)){
                return false;
            }
        }
        if(col[it]==col[i]){
            return false;
        }
    }
    return true;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n+1);
    for(int i=1;i<=m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<int>vis(n+1,0);
    vector<int>col(n+1,0);
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            if(!dfs(i,adj,vis,1,-1,col)){
                cout<<"IMPOSSIBLE";
                return 0;
            }
        }
    }
    for(int i=1;i<=n;i++)cout<<col[i]<<" ";
}