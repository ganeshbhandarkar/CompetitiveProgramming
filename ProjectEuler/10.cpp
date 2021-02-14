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
    ll cnt = 0;
    //primeSeive();
    // ll i = 3;
    // bool fg = 1;
    // while(i<2000000) {
    //     for (int j = 2; j <= sqrt(i); j++){
    //         if(i%j == 0){
    //             fg = 0;
    //             break;
    //         }
    //     }
    //     if(fg == 1){
    //         cnt += i;
    //     }    
    //     fg = 1; 
    //     i+=2;
    // }
    // int cnt = 0;
    int n = 2000000;
    vector<char> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    for(int i=0;i<2000000;i++){
        if(is_prime[i]) cnt+=i;
        
    }
    cout<<cnt<<endl;
}