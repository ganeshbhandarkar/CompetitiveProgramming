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
    int n;
    cin>>n;
    string s;cin>>s;
    int se=0,sf=0;
    for(int i=0;i<n-1;i++){
        if(s[i]=='S' && s[i+1]=='F')se++;
        else if(s[i]=='F' && s[i+1]=='S')sf++;
    }
    if(sf==se) return puts("NO"), 0;
    (sf < se)? puts("YES") : puts("NO");
}