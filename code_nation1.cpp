#include<bits/st
int aggressiveCows(vector<int> &stalls, int k){
    sort(stalls.begin(),stalls.end());
    int n=stalls.size();
    int l=1,r=stalls[n-1]-stalls[0];
    int ans=0;
    while(l<=r){
        int mid=l+(r-l)/2;
        int splits=0;
        int sum=0;
        for(int i=1;i<stalls.size();i++){
            sum+=stalls[i]-stalls[i-1];
            if(sum>=mid){
                splits++;
                sum=0;
            }
        }
        cout<<l<<r<<splits<<mid<<"@";
        if(splits>=k){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return r+1;
}