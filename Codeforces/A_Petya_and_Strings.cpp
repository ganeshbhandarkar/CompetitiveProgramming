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
    string a,b;
    cin>>a>>b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    // cout<<a<<" "<<b;
    // for(int i=0;i<a.size();i++){
    //     if(a[i]>b[i]){
    //         cout<<1;
    //         return 0;
    //     }else{
    //         cout<<-1;
    //         return 0;
    //     }
    // }
    cout<<a.compare(b);
    return 0;
}