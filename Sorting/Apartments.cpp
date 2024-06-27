#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,m,k;cin>>n>>m>>k;
    vector<ll>v1(n),v2(m);
    for(int i=0;i<n;i++)cin>>v1[i];
    for(int i=0;i<m;i++)cin>>v2[i];
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int j=0,i=0,ans=0;
    for(int i=0;i<n;i++){
        while(j<m){
            if(v1[i]+k<v2[j])break;
            else if(v1[i]-k>v2[j])j++;
            else{
                j++;ans++;
                break;
            }
        }
    }
    cout<<ans;
}