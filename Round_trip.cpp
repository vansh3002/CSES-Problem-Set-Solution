#include<bits/stdc++.h>
#define ll long long
using namespace std;
void print_cycle(int i,vector<int>&path){
    auto it=find(path.begin(),path.end(),i);
    cout<<path.size()-(it-path.begin())+1<<endl;
    cout<<i<<" ";
    for(int j=path.size()-1;j>=0;j--){
        cout<<path[j]<<" ";
        if(path[j]==i)break;
    }
}
void path_find(vector<vector<int>>&adj,int i,int par,vector<int>&vis,vector<int>&path,bool&flag){
    if(flag)return;
    if(vis[i]){
        if(path.size()>2){
            print_cycle(i,path);
            flag=true;
            return;
        }
    }
    vis[i]=1;
    path.push_back(i);
    for(auto it:adj[i]){
        if(it==par)continue;
        path_find(adj,it,i,vis,path,flag);
    }
    path.pop_back();
    return;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n+1);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<int>vis(n+1,0);
    bool flag=false;
    for(int i=1;i<n;i++){
        if(!vis[i]){
            vector<int>path;
            if(!flag)path_find(adj,i,-1,vis,path,flag);
        }
    }
    if(!flag)cout<<"IMPOSSIBLE";
}
