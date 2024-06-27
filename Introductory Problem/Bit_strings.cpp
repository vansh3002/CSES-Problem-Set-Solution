#include<bits/stdc++.h>
#define ll long long
using namespace std;
const unsigned int mod=1e9+7;
int main(){
    int n;cin>>n;
    ll ans=1;
    while(n!=0){
        ans=(ans*2)%mod;
        n--;
    }
    cout<<ans;
}