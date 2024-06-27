#include<bits/stdc++.h>
#define ll long long
#define p pair
#define s second
#define f first
using namespace std;
ll solve(vector<vector<ll>>&dp,vector<ll>&v,int curr,int prev,int n){
    vector<int>ans;
    ans.push_back(v[i]);
    for(int i=1;i<n;i++){
        if(v[i]>ans.back()){
            ans.push_back(v[i]);
        }
        else{
            int it=lower_bound(ans.begin(),ans.end(),v[i])-ans.begin();
            ans[it]=v[i];
        }
    }
    return a
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    vector<vector<ll>>dp(n+1,vector<ll>(n+1,-1));
    cout<<solve(dp,v,0,n,n);
}