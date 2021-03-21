//I Love You MOTI
#include <bits/stdc++.h>
using namespace std;

using ll = long long; 
using vi = vector<int>; 
using pii = pair<int,int>; 
#define f first
#define s second
#define eb emplace_back
#define IO(NAME) cin.tie(0)->sync_with_stdio(0); if(fopen(NAME ".in", "r")) freopen(NAME ".in", "r", stdin), freopen(NAME ".in", "w", stdout); 
#define TT(tt) int tt;cin>>tt;while(tt--)
// char to int : [c[i]-'a']

int main() {
    IO("");
    ll n,b,d;
    cin>>n>>b>>d;
    ll x;
    ll s = 0;
    ll cnt =0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x<=b){
            s+=x;
        }    
        if(s>d){
            s=0;
            cnt++;
        }
    }
    
    cout<<cnt;

}