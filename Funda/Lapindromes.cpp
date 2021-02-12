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
    TT(tt){
        string s;
        cin>>s;
        string a,b;
        for(int i=0;i<s.size()/2;i++){
            a += s[i];
        }
        if(s.size() %2 == 0){
            for(int i=s.size()/2;i<s.size();i++){
                b += s[i];
            }
        }else{
            for(int i=s.size()/2 + 1;i<s.size();i++){
                b += s[i];
            }
        }
        
        sort(begin(a),end(a));
        sort(begin(b),end(b));
        // cout<<a<<" "<<b;
        bool chk = false;
        for(int i=0;i<a.size();i++){
            if(a[i] != b[i]){
                chk = true;
                break;
            }
        }
        if(chk == true){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}