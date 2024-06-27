#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    ll med=v[n/2],ans=0;
    for(int i=0;i<n;i++){
        ans+=abs(med-v[i]);
    }      
    cout<<ans;
}