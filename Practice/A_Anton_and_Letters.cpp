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
    string s;
    set<char> ss;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i] == '{' or s[i] == '}' or s[i] == ' ' or s[i] == ',' ){
            continue;
        }
        ss.insert(s[i]);
    }
    cout<<ss.size();
}