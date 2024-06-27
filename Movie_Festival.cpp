#include<bits/stdc++.h>
#define p pair
#define ll long long
#define f first
#define s second
using namespace std;
bool customSort(const pair<ll, ll> &a, const pair<ll, ll> &b) {
    if (a.first != b.first) {
        return a.first < b.first; // Sort based on the first element
    } else {
        return false; // Maintain order within pairs if the first elements are the same
    }
}
int main(){
    ll n;cin>>n;
    vector<p<ll,ll>>v;
    for(int i=0;i<n;i++){
        ll a,b;cin>>a>>b;
        v.push_back({b,a});
    }
    sort(v.begin(),v.end(),customSort);
    int curr=v[0].first,count=1;
    for(int i=1;i<n;i++){
        // cout<<v[i-1].f<<" "<<v[i].s<<endl;
        if(curr<=v[i].s){
            count++;
            curr=v[i].first;
        }
    }
    cout<<count<<endl;
}