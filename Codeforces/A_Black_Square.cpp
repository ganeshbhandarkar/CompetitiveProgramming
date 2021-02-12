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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;cin>>s;
    int sum = 0;
    for(auto i:s){
        if(i == '1'){
            sum += a;
        }else if(i == '2'){
            sum += b;
        }else if(i == '3'){
            sum += c;
        }else if(i == '4'){
            sum += d;
        }
    }
    return cout<<sum,0;
}