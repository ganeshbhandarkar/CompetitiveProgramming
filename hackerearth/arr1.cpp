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
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j =0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int cnt = 0;
        for(int i=0;i<n*n;i++){
            for(int j = 0;j<n;j++){
                for(int x = i;x<n;x++){
                    for(int y = j;y<n;y++){
                        if(a[i][j] > a[x][y]){
                            cnt++;
                        }
                    }
                }
            }
        }
        cout<<cnt<<endl;
    }
}