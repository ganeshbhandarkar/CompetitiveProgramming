#include <bits/stdc++.h>
using namespace std;

using ll = long long; 
using vi = vector<int>; 
using pii = pair<int,int>; 
#define f first
#define s second
#define eb emplace_back
#define IO(NAME) cin.tie(0)->sync_with_stdio(0); if(fopen(NAME ".in", "r")) freopen(NAME ".in", "r", stdin), freopen(NAME ".in", "w", stdout); 

// ll dp[1000000000] = {0};

int main() {
    IO("");
    int n;
    cin>>n;
    // dp[0]=1;
    // dp[1]=2;
    // dp[2]=4;
    // dp[3]=6;
    // for(ll i=4;i<1000000000;i++){
    //     dp[i] = dp[i-1]+dp[i-2];
    // }
    while(n--){
        ll a;cin>>a;
        // cout<<dp[a]<<endl;
        ll x = a / 2; 
        cout<< ((x + 1) * (a - x + 1))<<endl; 
    }
    return 0;
}