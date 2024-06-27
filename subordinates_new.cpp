#include<bits/stdc++.h>
#define ll long long
using namespace std;
int dfs(int i,vector<vector<int>>&adj,vector<int>&vis){
    if(adj[i].size()==0)return 1;
    else{
        for(auto it:adj[i]){
            vis[i]+=dfs(it,adj,vis);
        }
    }
    return vis[i]+1;
}
int main(){
    int n;cin>>n;
    vector<vector<int>>adj(n+1);
    for(int i=2;i<=n;i++){
        int x;cin>>x;
        adj[x].push_back(i);
    }
    vector<int>vis(n+1,0);
    dfs(1,adj,vis);
    for(int i=1;i<=n;i++){
        cout<<vis[i]<<" ";
    }
}
