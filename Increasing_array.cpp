#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans=0;
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){
            ans+=v[i-1]-v[i];
            v[i]=v[i-1];
        }
    }
    cout<<ans;
}