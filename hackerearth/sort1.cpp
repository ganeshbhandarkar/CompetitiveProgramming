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
    string s;cin>>s;
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0;i<s.size();i++){
        string m = "";
        for(int j = i;j<s.size();j++){
            m += s[j];
        }
        v.eb(m);
        m = "";
    }
    sort(v.begin(),v.end());
    cout<<v[n-1]<<endl;
}