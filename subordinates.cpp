#include<bits/stdc++.h>
#define ll long long
using namespace std;
void dfs(int i,vector<vector<int>>&adj,vector<int>&vis,int& count){
    vis[i]=1;
    for(auto it :adj[i]){
        count++;
        dfs(it,adj,vis,count);
    }
}
int main(){
    int n;cin>>n;
    vector<vector<int>>adj(n+1);
    for(int i=2;i<=n;i++){
        int x;cin>>x;
        adj[x].push_back(i);
    }
    for(int i=1;i<=n;i++){
        if(i==1)cout<<n-1<<" ";
        else{
            vector<int>vis(n+1,0);
            int count=0;
            dfs(i,adj,vis,count);
            cout<<count<<" ";
        }
    }
}
