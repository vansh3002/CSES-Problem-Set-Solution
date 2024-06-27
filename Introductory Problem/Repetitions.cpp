#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    int prev=0;
    int ans=1;
    int res=1;
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]){
            ans++;
            res=max(ans,res);
        }
        else ans=1;
    }
    cout<<res;
}