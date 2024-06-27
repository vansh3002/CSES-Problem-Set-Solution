#include<bits/stdc++.h>
using namespace std;
void solve(string s,string str,int n,set<string>&v,vector<int>&vis){
    if(str.length()==n){
        v.insert(str);
        return;
    }
    for(int i=0;i<s.length();i++){
        if(!vis[i]){
            vis[i]=1;
            solve(s,str+s[i],n,v,vis);
            vis[i]=0;
            // solve(s,str,n,v,vis);
        }
    }  
}
int main(){
    string s;cin>>s;
    set<string>v;
    vector<int>vis(s.length(),0);
    solve(s,"",s.length(),v,vis);
    cout<<v.size()<<endl;
    for(auto it:v){
        cout<<it<<endl;
    }
}