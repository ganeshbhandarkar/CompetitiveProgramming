#include <bits/stdc++.h>
using namespace std;

using ll = long long; 
using vi = vector<int>; 
using pii = pair<int,int>; 
#define f first
#define s second
#define eb emplace_back
#define IO(NAME) cin.tie(0)->sync_with_stdio(0); if(fopen(NAME ".in", "r")) freopen(NAME ".in", "r", stdin), freopen(NAME ".in", "w", stdout); 

int main() {
    IO("");
    int n;cin>>n;
    int a,b,c,sa=0,sb=0,sc=0;
    for(int i=0;i<n;i++){
    	cin>>a>>b>>c;
    	sa+=a,sb+=b,sc+=c;
    }
    if(sa == 0 and sb == 0 and sc == 0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}