#include<bits/stdc++.h>
#define ll long long
#define p pair
using namespace std;
int main(){
    ll n;cin>>n;
    vector<ll>arr;
    vector<ll>dep;
    for(int i=0;i<n;i++){
        ll a,b;cin>>a>>b;
        arr.push_back(a);
        dep.push_back(b);
    }
    sort(arr.begin(),arr.end());
    sort(dep.begin(),dep.end());
    int ans=1,count=1;
    int i=1,j=0;
    while(i<n && j<n){
        if(arr[i]<dep[j]){
            count++;
            ans=max(count,ans);
            i++;
        }
        else{
            count--;
            j++;
        }
    }
    cout<<ans<<endl;
}