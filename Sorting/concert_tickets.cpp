#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    vector<ll>v1(n);
    vector<ll>v2(m);
    for(int i=0;i<n;i++)cin>>v1[i];
    for(int i=0;i<m;i++)cin>>v2[i];
    sort(v1.begin(),v1.end());
    int j=0;
    vector<int>vis(n,0);
    for(int i=0;i<m;i++){
        auto it=lower_bound(v1.begin(),v1.end(),v2[i]);
        if(it==v1.end() || vis[it-v1.begin()])cout<<-1<<endl; 
        else{
            if(*it==v2[i]){
                vis[it-v1.begin()]=1;
                cout<<*it<<endl;;
            }
            else{
                --it;
                cout<<*it<<endl;
                vis[it-v1.begin()]=1;
            }
        }
    }
}