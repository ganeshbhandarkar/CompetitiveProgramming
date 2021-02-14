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
    for(int i=1;i<999;i++){
        for(int j=i+1;j<999;j++){
            for(int k = j+1;k<999;k++){
                if((i+j+k == 1000) and (i*i + j*j == k*k)){
                    cout<<i<<" "<<j<<" "<<k<<endl;
                    cout<<i*j*k<<endl;
                    return 0;
                }
            }
        }
    }
}