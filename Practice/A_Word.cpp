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
    int l=0,ss=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>=65 and s[i]<=90){
            l++;
        }else{
            ss++;
        }
    }
    if(l == ss or l < ss){
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s;
    }else if(l > ss){
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout<<s;
    }
}