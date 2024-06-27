#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    ll ans=v[0],sum=v[0];
    for(int i=1;i<n;i++){
        if(sum<0){
            sum=v[i];
            ans=max(ans,sum);
        }
        else{
            sum+=v[i];
            ans=max(ans,sum);
        }
    }
    cout<<ans<<endl;
}