#include<bits/stdc++.h>
#define ll long long
using namespace std;

void cons_segmenttree(vector<ll>&v,vector<ll>&seg,int i,int low,int high){
	if(low==high){
		seg[i]=v[low];
		return;
	}
	int mid=(low+high)/2;
	cons_segmenttree(v,seg,2*i+1,low,mid);
	cons_segmenttree(v,seg,2*i+2,mid+1,high);
	seg[i]=seg[2*i+1]+seg[2*i+2];
}
ll sum(int l,int r,vector<ll>&seg,int low,int high,int idx){
	if(low>=l && high<=r){
		return seg[idx];
	}
	if(high<l || low>r)return 0;
	int mid=(low+high)/2;
	ll left=sum(l,r,seg,low,mid,2*idx+1);
	ll right=sum(l,r,seg,mid+1,high,2*idx+2);
	return left+right;
	
}
int main(){
	int n,q;
	cin>>n>>q;
	vector<ll>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	vector<ll>seg(4*n,0);
	cons_segmenttree(v,seg,0,0,n-1);
	for(int i=0;i<q;i++){
		int l,r;
		cin>>l>>r;
		ll ans=sum(l-1,r-1,seg,0,n-1,0);
		cout<<ans<<endl;
	}
}
