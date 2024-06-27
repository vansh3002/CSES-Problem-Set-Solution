#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    
    int n;cin>>n;
    set<ll>s;
    for(int i=0;i<n;i++){
        ll x;cin>>x;
        s.insert(x);
    }
    cout<<s.size();
}