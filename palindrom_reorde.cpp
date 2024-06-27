#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    map<char,int>mp;
    int odd=0;char odd_char;
    for(int i=0;i<s.length();i++)mp[s[i]]++;
    for(auto it:mp){
        if(mp[it.first]%2){
            odd++;
            odd_char=it.first;
        }
    }
    if(odd>1){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        string l="",r="";
        for(auto it:mp){
            string s1(it.second/2,it.first);
            l+=s1;
            r=s1+r;
        }
        if(odd==1){
            cout<<l+odd_char+r;
        }
        else{
            cout<<l+r;
        }
    }

}