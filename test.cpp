#include<bits/stdc++.h>
#define pb push_back
#define F first
#define S second
#define ll long long int
#define ull unsigned long long
#define ld long double
#define p pair
#define pi pair<int,int>
#define m map
using namespace std;
typedef pair<int,int> PII;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll n,m;cin>>n>>m;
        int idx=1,x=0,ans=0;
        while(n>0){
            if(n%2==1){
                ans+=idx;x+=idx;
            }
            else{
                int y= min(idx-x,x+1);
                if(y<=m)ans+=idx;
            }
            idx*=2;
            n/=2;
        }
            while(idx-x<=m){
                ans+=idx;
                idx*=2;
            }
            cout<<ans<<endl;
    }
}


