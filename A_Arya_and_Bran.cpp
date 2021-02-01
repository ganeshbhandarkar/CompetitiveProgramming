#include <bits/stdc++.h>
using namespace std;

using ll = long long; 
using vi = vector<int>; 
using pii = pair<int,int>; 
#define f first
#define s second
#define eb emplace_back
#define IO(NAME) cin.tie(0)->sync_with_stdio(0); if(fopen(NAME ".in", "r")) freopen(NAME ".in", "r", stdin), freopen(NAME ".in", "w", stdout); 

int main() {
    IO("");
    //
    //
    //
    //
    int days,candles;
    cin>>days>>candles;
    int t = 0,r=0,br=0,ans=0;
    for(int i=0;i<days;i++){
        cin>>t;
        r+=t;
        br = min(8,r);
        r -= br;
        candles -= br;
        ans++;
        if(candles <= 0){
            break;
        }
        
    }

    cout<<((candles>0)? -1 : ans )<<endl;
  
}