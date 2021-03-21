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
    TT(tt){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int cnt = 0;
        for(int i=a;i<=b;i++){
            if(i % (c+ 4*d)== 0 or (i%(c+d) == 0) or (i % (c+ 2*d)== 0) or (i%(c+ 3*d) == 0) or (i%c == 0)){
                continue;
            }
            cnt++;
        }
        cout<<cnt<<endl;
    }
}