#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;cin>>n;
    long long ans=0;
    for(int i=5;n/i>=1;i*=5){
        ans+=n/i;
    }
    cout<<ans<<endl;
}