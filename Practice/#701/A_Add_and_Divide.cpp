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
    TT(tt){
        int a,b;
        cin>>a>>b;
        int cnt = 1;
        b++;
        if(a < b){
            cout<<1<<endl;
            continue;
        }else if(a == b){
            cout<<2<<endl;
            continue;    
        }else{
            while(a > 0){
            // int r = a/b;
            // int s = a/(b+1);
            // a/=b;
            // b++;
            a/=b;
            cnt++;
            
                // if(a*b == a){
                //     b++;
                //     cnt++;
                // }else{
                //     a/=b;
                //     cnt++;
                // }
                                   
            } 
        }
            
        cout<<cnt<<endl;
    }
}