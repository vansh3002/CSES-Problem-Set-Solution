#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    if(n==1){
        cout<<1;
        return 0;
    }
    if(n<4){
        cout<<"NO SOLUTION";
        return 0;
    }
    if(n==4){
        cout<<3<<" "<<1<<" "<<4<<" "<<2;
        return 0;
    }
    int l=1,r=(n+1)/2;
    for(int i=0;i<n;i++){
        if(i%2==0 ){
            cout<<l<<" ";
            l++;
        }
        else{
            r++;
            cout<<r<<" ";
        }
    }
}