
#include <bits/stdc++.h>
using namespace std;

using ll = long long; 
using vi = vector<int>; 
using pii = pair<int,int>; 
#define f first
#define s second
#define eb emplace_back
#define IO(NAME) cin.tie(0)->sync_with_stdio(0); if(fopen(NAME ".in", "r")) freopen(NAME ".in", "r", stdin), freopen(NAME ".in", "w", stdout); 
const int mod = 1000000000 + 7;
	ll power(ll a, ll b)	//a is base, b is exponent
	{
		if(b==0)
			return 1;
		if(b==1)
			return a;
		if(b%2 == 1)
			return (power(a,b-1)*a)%mod;
		ll q = power(a,b/2);
		return (q*q)%mod;
	}
int main() {
    IO("");
    /*   श्री छोटे बाबा   */
    int t;cin>>t;
    while(t--){
    	int n,k;cin>>n>>k;
    	cout<<power(n,k)<<endl;
    }
}
