#include<bits/stdc++.h>
using namespace std;
void tower(int a,int b,int c,int n){
    if(n==0)return;
    tower(a,c,b,n-1);
    cout<<a<<' '<<c<<endl;
    tower(b,a,c,n-1);
}
int main(){
    int n;cin>>n;
    cout<<pow(2,n) -1<<endl;
    tower(1,2,3,n);
}