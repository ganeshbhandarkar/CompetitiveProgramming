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

int main() {
    IO("");
    TT(tt){
        int n;
        cin>>n;
        string s;cin>>s;
        int cnt = 0;
        int ans = 0;
        for(int i=0;i<s.size();i++){
                if(s[i]=='1' ){
                    cnt++;
                    ans += cnt;
                }
        }
        cout<<ans<<endl;
    }
}