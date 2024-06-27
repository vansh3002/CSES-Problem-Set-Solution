#include<bits/stdc++.h>
#define ll long long
#define p pair
#define s second
#define f first
using namespace std;
int main(){
    ll n;cin>>n;
    vector<p<ll,ll>>v;
    for(int i=0;i<n;i++){
        ll x;cin>>x;
        v.push_back({x,i});
    }
    ll tot_round=1;
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++){
        if(v[i].s<v[i-1].s)tot_round++;
    }
    cout<<tot_round;
}