#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>>&adj,vector<int>&vis,int i,int& count){
    vis[i]=1;
    count++;
    for(auto it:adj[i]){
        if(!vis[it]) dfs(adj,vis,it,count);
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n+1);
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<int>ans;
    vector<int>vis(n+1,0);
    int count=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(adj,vis,i,count);
            ans.push_back(i);
        }
    }
    if(ans.size()==1)cout<<0;
    else{
        cout<<ans.size()-1<<endl;
        for(int i=0;i<ans.size()-1;i++){
            cout<<ans[i]<<" "<<ans[i+1]<<endl;
        }
    }
}