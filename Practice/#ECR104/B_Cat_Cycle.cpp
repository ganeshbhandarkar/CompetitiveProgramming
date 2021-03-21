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
        int n,k;cin>>n>>k;
        int a = n;
        int b = 1;
        int i = 1;
        while(i<k){
            a--;
            if(a<1){
                a = n;
            }
            if(b == n){
                b=1;
            }
            if(b+1 == a){
                b = (b+2);
            }else{
                b++;
            }
            
            i++;
        }
        cout<<b<<endl;
    }
}