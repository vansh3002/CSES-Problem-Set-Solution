#include<bits/stdc++.h>
#define ll long long
using namespace std;
void construct_segment(vector<ll>&v,vector<ll>&seg,int low,int high,int i){
    if(low==high){
        seg[i]=v[low];
        return;
    }
    int mid=(low+high)/2;
    construct_segment(v,seg,low,mid,2*i+1);
    construct_segment(v,seg,mid+1,high,2*i+2);
    seg[i]=(seg[2*i+1]+seg[2*i+2]);
}
ll solve(int l,int r,int low,int high,int i,vector<ll>&seg){
    if(low>=l && high<=r){
        return seg[i];
    }
    if(r<low || l>high){
        return 0;
    }
    int  mid=(low+high)/2;
    ll left=solve(l,r,low,mid,2*i+1,seg);
    ll right=solve(l,r,mid+1,high,2*i+2,seg);
    return left+right;
}
int main(){
    int n,q;
    cin>>n>>q;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll>seg(4*n);
    construct_segment(v,seg,0,n-1,0);
    for(int i=0;i<q;i++){
        int x,l,r;
        cin>>x>>l>>r;
        if(x==1){
            v[l-1]=r;
            fill(seg.begin(),seg.end(),0);
            construct_segment(v,seg,0,n-1,0);
        }
        else{
            ll ans=solve(l-1,r-1,0,n-1,0,seg);
            cout<<ans<<endl;
        }
    }
}