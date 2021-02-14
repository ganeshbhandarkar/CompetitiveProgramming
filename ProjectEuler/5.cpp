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
    for(int i=20;i<=10000000;i++){
        int cnt = 0;
        for(int j=1;j<=20;j++){
            if(i%j == 0){
                cnt++;
            }
        }
        if(cnt >= 19){
            cout<<i<<endl;
        }
    }
    return 0;
}