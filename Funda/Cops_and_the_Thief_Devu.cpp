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
    int t;cin>>t;
    while(t--){
        int m,x,y;
        cin>>m>>x>>y;
        int a[101] = {0};
        int dis = x*y;
        int xx[m];
        for(int i=0;i<m;i++){
            cin>>xx[i];
            xx[i]--;
            int xxx = xx[i]-dis;
            if(xxx < 0) xxx = 0; 
            for(int j=xxx;j<=dis+xx[i] && j<=100;j++){
                if(j>=0)
                    a[j] = 1;
            }
            
            // if(xxx < 0) xxx = 0;
            // for(int j=xxx;j<=xx[i];j++){
            //     if(j>=0)
            //         a[j] = 1;
            // }
        }
        int cnt = 0;
        for(int i=0;i<100;i++){
            if(a[i]==0)cnt++;
        }
        cout<<cnt<<endl;
    }
}