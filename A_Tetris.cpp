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
    int n,m;
    cin>>n>>m;
    vi a(n,0);
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        ++a[x-1];
    }
    
    return cout<<*min_element(a.begin(),a.end()) ,0;
}