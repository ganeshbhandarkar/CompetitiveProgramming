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
        int x,y,k,n;cin>>x>>y>>k>>n;
        int p[n],c[n];
        int dif = x-y;
        bool ch = true;
        for(int i=0;i<n;i++){
            cin>>p[i]>>c[i];           
        }
        for(int i=0;i<n;i++){
            if(p[i] >= dif and c[i] <= k){
                ch = false;
                break;
            }
        }
        cout<<((!ch) ? "LuckyChef" : "UnluckyChef")<<endl;     
    }
}