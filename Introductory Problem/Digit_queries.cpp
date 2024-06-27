#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    vector<ll>powers(19,1);
    for(int i=1;i<19;i++){
        powers[i]=powers[i-1]*10;
    }
    ll q;cin>>q;
    while(q--){
        ll k;cin>>k;
        if(k<=9)cout<<k<<endl;
        else{
            ll numdigit=0,digit=0,prevdigit=0;
            for(int i=1;i<19;i++){
                digit+=(powers[i]-powers[i-1])*i;
                if(digit>=k){
                    numdigit=i;
                    break;
                }
                prevdigit=digit;
            }
            ll l=powers[numdigit-1];
            ll r=powers[numdigit]-1;
            ll ans=0,start=0;
            while(l<=r){
                ll mid=(l+r)/2;
                ll startpos=(mid-powers[numdigit-1])*numdigit + prevdigit+1;
                if(startpos<=k){
                    if(mid>ans){
                        ans=mid;
                        start=startpos;
                    }
                    l=mid+1;
                }
                else r=mid-1;
            }
            string str=to_string(ans);
            cout<<str[k-start]<<endl;
        }
    }
}