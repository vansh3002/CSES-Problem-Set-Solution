#include<bits/stdc++.h>
#define ll long long
#define p pair
#define f first
#define s second
using namespace std;
int main(){
    ll n,x;cin>>n>>x;
    vector<p<ll,ll>>v;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back({a,i});
    }
    sort(v.begin(),v.end());
    int i=0,j=n-1;
    while(i<j){
        if(v[j].f>=x)j--;
        else if(v[i].f>=x){
            cout<<"IMPOSSIBLE";
            return 0;
        }
        else if(v[i].f+v[j].f==x){
            cout<<v[i].s+1<<" "<<v[j].s+1;
            return 0;
        }
        else if(v[i].f+v[j].f>x)j--;
        else i++;
    }
    cout<<"IMPOSSIBLE";
}