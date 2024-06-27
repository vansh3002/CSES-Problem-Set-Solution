#include<bits/stdc++.h>
using namespace std;
bool check(string it,string c){
	for(int i=0;i<it.length();i++){
		if(c.find(it[i])==string::npos){
			return false;
		}
	}
	return true;
}
int main(){
	vector<pair<string,string> >F;
	int n;cin>>n;
	for(int i=0;i<n;i++){
		string s1,s2;
		cin>>s1>>s2;
		F.push_back({s1,s2});
	}
	string closure;cin>>closure;
	bool flag=true;
	string str="";
	while(flag){
		for(auto it:F){
			if(check(it.first,closure)){
				int c=0;
				for(int i=0;i<it.second.length();i++){
					if(closure.find(it.second[i])==string::npos){
						closure+=it.second[i];
						flag=true;
						c=1;
					}
				}
				if(c==0){
					flag=false;
					break;
				}
			}
		}
	}
	cout<<closure;
}
