#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<vector<int>>ans;
void find(vector<vector<int>>& dp, int n, vector<int>& v, int sum) {
    if (sum == 0) {
        ans.push_back(v);
        return;
    }
    if(sum<0)return;
    if (n == 0) return;
    if (n > sum) {
        find(dp, n - 1, v, sum);
    }
    v.push_back(n);
    find(dp, n - 1, v, sum - n);
    v.pop_back();
    find(dp, n - 1, v, sum);
}
int main(){
    int n;cin>>n;
    ll sum=(n*(n+1))/2;
    sum=sum/2;
    vector<int>ans1;
    vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
    find(dp,n,ans1,sum);
    for(int i=0;i<ans.size();i++){
        for(auto it:ans[i]){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    cout<<ans.size()<<endl;
}