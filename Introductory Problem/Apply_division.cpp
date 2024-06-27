#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll solve(ll idx,ll n,ll sum,ll tsum,vector<ll>&v){
    if(idx==n){
        return abs(tsum-2*sum);
    }
    return min(solve(idx+1,n,sum,tsum,v),solve(idx+1,n,sum+v[idx],tsum,v));
}
int main(){
    ll n;cin>>n;
    vector<ll>v(n);
    ll tsum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        tsum+=v[i];
    }
    // vector<vector<ll>>dp(n+1,vector<ll>(tsum+1,-1));
    cout<<solve(0,n,0,tsum,v);
}