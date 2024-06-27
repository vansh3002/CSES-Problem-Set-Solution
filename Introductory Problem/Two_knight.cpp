#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;cin>>n;
    cout<<0<<endl;
    for(int i=2;i<=n;i++){
        ll x=i*i;
        ll ans=((x*(x-1))/2)-(4*(i-1)*(i-2));
        cout<<ans<<endl;
    }
}