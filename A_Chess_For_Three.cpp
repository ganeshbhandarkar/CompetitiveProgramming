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
    int n;cin>>n;
    int x;
    int spec = 3;
    for(int i=0;i<n;i++){
        cin>>x;
        if(spec == x){
            puts("NO");
            return 0;
        }
        spec = 6 - spec - x;
    }
    puts("YES");
}
