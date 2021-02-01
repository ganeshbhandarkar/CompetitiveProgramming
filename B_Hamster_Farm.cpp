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
    int64_t n,k;cin>>n>>k;
    int64_t ans = INT_MAX,typ,sol;
    for(int64_t i=0;i<k;i++){
        int64_t x;cin>>x;
        if(n%x <= ans){
            ans = n%x;
            sol = n/x;
            typ = i;
        }
    }
    cout<<typ+1<<" "<<sol;
    return 0;
}


//# Wanna Learn How to handle Large integers using Python and C++