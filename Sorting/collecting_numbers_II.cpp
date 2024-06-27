#include<bits/stdc++.h>
#define ll long long
#define f first
#define s second
using namespace std;
int main(){
    ll n,m;cin>>n>>m;
    vector<pair<ll,ll>>v;
    for(int i=0;i<n;i++){
        ll x;cin>>x;
        v.push_back({x,i});
    }
    sort(v.begin(),v.end());
    while(m--){
        ll a,b;cin>>a>>b;
        ll i1=0,i2=0;
        for(int i=0;i<n;i++){
            if(v[i].s==a-1)i1=v[i].f;
            if(v[i].s==b-1)i2=v[i].f;
        }
        swap(v[i1-1].s,v[i2-1].s);
        ll tot_round=1;
        for(int i=1;i<n;i++){
            if(v[i].s<v[i-1].s)tot_round++;
        }
        cout<<tot_round<<endl;
    }
}