#include<bits/stdc++.h>
#define pb push_back
#define F first
#define S second
#define ll long long
#define ull unsigned long long
#define ld long double
#define p pair
#define pi pair<int,int>
#define m map
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,c,d;cin>>n>>c>>d;
        vector<int>v(n*n);
        for(int i=0;i<n*n;i++)cin>>v[i];
        int x=*min_element(v.begin(),v.end());
        int start=x;
        vector<int>b(n*n);
        b[0]=start;
        for(int i=1;i<n*n;i++){
            if(i%n!=0)b[i]=b[i-1]+d;
            else b[i]=b[i-n]+c;
            // cout<<b[i]<<" ";
        }
        sort(b.begin(),b.end());
        sort(v.begin(),v.end());
        (b==v)?cout<<"YES":cout<<"NO";
        cout<<endl;
    }
}