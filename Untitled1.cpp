#include <bits/stdc++.h>
#define pb push_back
#define F first
#define S second
#define ll long long int
#define ull unsigned long long
#define ld long double
#define p pair
#define pi pair<int, int>
#define m map
using namespace std;
typedef pair<int, int> PII;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        ll x,y,k;
        cin>>x>>y>>k;
        while((y-(x%y))<k){
//        	cout<<1;
           ll r=x%y;
           k-=r;
           x+=r;
           while(x%y==0){
               x=x/y;
           }
        }
        cout<<x+k<<endl;
    }
    return 0;
}

