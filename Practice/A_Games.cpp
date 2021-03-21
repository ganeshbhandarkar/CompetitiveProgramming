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
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(a[i]==b[j]){
                cnt++;
            }
        }
    }
    return cout<<cnt,0;
}