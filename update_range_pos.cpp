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
    seg[i]=(seg[2*i+1]^seg[2*i+2]);
}
ll solve(int l,int r,int low,int high,int i,vector<ll>&seg){
    if(r<low || l>high){
        return 0;
    }
    if(low==high && low==l){
        return seg[i];
    }
    int  mid=(low+high)/2;
    ll left=solve(l,r,low,mid,2*i+1,seg);
    ll right=solve(l,r,mid+1,high,2*i+2,seg);
    return left+right;
}
void update(vector<ll>&seg,int a,int b,int u,int l,int r,int i){
    if(b<l || a>r) return;
    if(l==r){
        seg[i]+=u;
        return;
    }
    int mid=(l+r)/2;
    update(seg,a,b,u,l,mid,2*i+1);
    update(seg,a,b,u,mid+1,r,2*i+2);
    seg[i]=seg[2*i+1]+seg[2*i+2];
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
    while(q--){
        int x;cin>>x;
        if(x==1){
            int a,b,u;
            cin>>a>>b>>u;
            update(seg,a-1,b-1,u,0,n-1,0);
        }
        else{
            int k;cin>>k;
            cout<<solve(k-1,k-1,0,n-1,0,seg)<<endl;
        }
    }
}
