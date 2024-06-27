#include<bits/stdc++.h>
#define ll long long
#define p pair
#define f first
#define s second
using namespace std;
int main(){
    ll n;cin>>n;
    vector<ll>v;
    map<ll,bool>mp;
    ll j=0,ans=0,curr=0;
    for(int i=0;i<n;i++){
        ll x;cin>>x;
        v.push_back(x);
        if(mp.find(x)==mp.end() || mp[x]==false){
            mp[x]=true;
            curr++;
            ans=max(ans,curr);
        }
        else {
            while(v[j]!=x){
                mp[v[j]]=false;
                j++;
            }
            curr=i-j;
            j++;
        }
    } 
    cout<<ans;
}