#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
        ll sum=1;
        for(int i=0;i<n;i++){
            if(sum<v[i]){
                break;
            }
            else{
                sum+=v[i];
            }
        }       
    cout<<sum;
}