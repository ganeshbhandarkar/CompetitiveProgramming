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
    int n,o;
    cin>>n>>o;
    string s;
    cin>>s;
    for(int i=0;i<o;i++){
        int l,e;
        char le,ch;
        cin>>l>>e>>le>>ch;
        for(int k=l-1;k<e;k++){
            if(s[k]==le){
                //out<<"true";
                s[k]=ch;
            }
        }
    }
    return cout<<s, 0;
}