#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,x;cin>>n>>x;
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    int i=0,j=n-1;
    while(i<j){
        if(v[i]+v[j]<=x){
            n--;
            i++;j--;
        }
        else j--;
    }
    cout<<n;
}