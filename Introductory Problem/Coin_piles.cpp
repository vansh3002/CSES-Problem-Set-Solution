#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool solve(){
    ll a,b;cin>>a>>b;
    ll diff=abs(a-b);
    if(a>b){
        a-=2*diff;
        b-=diff;
    }
    else{
        b-=2*diff;
        a-=diff;
    }
    if(a%3==0 && a>=0 && b>=0)return true;
    return false;
}
int main(){
    int t;cin>>t;
    while(t--){
        if(solve()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}