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
    int max = -1;
    for(int i=999;i>=900;i--){
        for(int j = 999;j>=900;j--){
            string r = to_string(i*j);           
            reverse(begin(r),end(r));
            if(r == to_string(i*j)){
                cout<<r<<endl;
            }
        }
    }
}