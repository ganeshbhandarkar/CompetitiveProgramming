
	#include <bits/stdc++.h>
	#include <cstdio>
	#include <cstring>
	#include <cmath>
	#include <cstring>
	#include <chrono>
	#include <complex>
	#define endl "\n"
	#define ll long long int
	#define vi vector<int>
	#define vll vector<ll>
	#define vvi vector < vi >
	#define pii pair<int,int>
	#define pll pair<long long, long long>
	#define mod 1000000007
	#define inf 1000000000000000001;
	#define all(c) c.begin(),c.end()
	#define mp(x,y) make_pair(x,y)
	#define mem(a,val) memset(a,val,sizeof(a))
	#define eb emplace_back
	#define f first
	#define s second
	
	using namespace std;
	int main()
	{
		std::ios::sync_with_stdio(false);
		// int T;
		// cin>>T;
		// // cin.ignore(); must be there when using getline(cin, s)
		// while(T--)
		// {
			ll n;cin>>n;
			ll a[n];
			ll ans = 0;
			for(int i=0;i<n;i++)cin>>a[i];
			sort(a,a+n,greater<>());
			ll ma = INT_MIN,mi = INT_MAX;
			for(int i=0;i<n;i++){
				for(int j=i;j<n;j++){
					ma = max(a[j],ma);
					mi = min(a[j],mi);	
				}
				ans += (ma - mi);
				// cout<<ma<<" "<<mi<<endl;
				// cout<<ans<<endl;
				ma = INT_MIN;
				mi = INT_MAX;
			}
			cout<<ans<<endl;
		// }
			//cout<<abs(2833800505 - 3166199081)<<endl;
		return 0;
	}
