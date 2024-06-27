#include<bits/stdc++.h>
#define ll long long
#define p pair
#define pi pair<int,int>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    priority_queue<p<ll,ll>, vector<p<ll,ll>>, greater<p<ll,ll>>>pq;
    ll n,m;cin>>n>>m;
    vector<p<ll,ll>> adj[n+1];
    for(int i=0;i<m;i++){
        ll x,y,w;cin>>x>>y>>w;
        adj[x].push_back({y,w});
        // adj[y].push_back({x,w});
    }
    vector<ll>v(n+1,0);
    vector<ll>vis(n+1,0);
    pq.push({0,1});
    ll sum=0;
    while(!pq.empty()){
        ll dist=pq.top().first;
        ll curr=pq.top().second;
        pq.pop();
        if(vis[curr])continue;
        vis[curr]=1;
        sum++;
        // cout<<dist<<curr<<endl;
        if(sum==n+1)break;
        if(v[curr]==0)v[curr]=dist;
        for(auto it:adj[curr]){
            if(!vis[it.first]){
                pq.push({dist+it.second,it.first});
            }
        }
    }
    for(int i=1;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
