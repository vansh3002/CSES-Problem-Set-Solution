#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define f first
#define s second
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>>v(n,vector<char>(m));
    pair<int,int> p1,p2;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
            if(v[i][j]=='A')p1=mp(i,j);
            if(v[i][j]=='B')p2=mp(i,j);
        }
    }
    queue<pair<int,int>>q;
    vector<vector<int>>vis(n,vector<int>(m,0));
    vector<vector<int>>prev(n,vector<int>(m,-1));
    int start[]={-1,0,+1,0};
    int end[]  ={0,+1,0,-1};
    q.push(p1);
    vis[p1.f][p1.s]=1;
    while(!q.empty()){
        int r=q.front().f;
        int c=q.front().s;
        q.pop();
        for(int i=0;i<4;i++){
            int rr=r+start[i];
            int cc=c+end[i];
            if(rr<0 || rr>=n || cc<0 || cc>=m)continue;
            if(v[rr][cc]=='#')continue;
            if(vis[rr][cc])continue;
            vis[rr][cc]=1;
            prev[rr][cc]=i;
            q.push({rr,cc});
        }
    }
    if(vis[p2.f][p2.s]){
        cout<<"YES"<<endl;
        vector<int>steps;
        while(p1!=p2){
            int p=prev[p2.f][p2.s];
            steps.push_back(p);
            p2=mp(p2.f-start[p],p2.s-end[p]);
        }
        reverse(steps.begin(),steps.end());
        cout<<steps.size()<<endl;
        string str="URDL";
        string ans="";
        for(auto it:steps){
            ans+=str[it];
        }
        cout<<ans<<endl;
    }
    else cout<<"NO"<<endl;
}
