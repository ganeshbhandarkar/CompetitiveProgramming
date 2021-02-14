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
vector<char> seive(1000001,true);
void primeSeive(){    
    seive[0] = seive[1] = false;
    for(int i=2;i*i<1000000;i++){
        if(seive[i]){
            for(int j = i*i;j<1000000;j+=i){
                seive[i] = false;
            }
        }
    }
}
int main() {
    IO("");
    int cnt = 0;
    //primeSeive();
    int n = 1000000;
    vector<char> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    for(int i=0;i<1000000;i++){
        if(is_prime[i]) cnt++;
        if(cnt == 10001){
            cout<<i;
            break;
        }
    }
    return 0;
}