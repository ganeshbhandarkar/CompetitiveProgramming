
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
		// ifstream fin;
		// ofstream fout;
		// fin.open("input");
		// fout.open("output");

		int T;
		cin>>T;
		for(int t=1;t<=T;t++)
		{
			ll ans=0;
			int a,b;
			cin>>a>>b;
			string s;cin>>s;
			//s = 'a' + s;
			int cnt = 0,cntno=0;
			for(int i=0,j=a-1;i<j;i++,j--){
				if(s[i]!=s[j]) cnt++;
				//else cntno++;
				// if(s[i] != s[a-i+1]){
				// 	// cout<<s[i]<<s[a-i+1]<<endl;
				// 	cnt++;
				// }else{
				// 	cntno++;
				// 	cout<<cntno<<endl;
				// }
			}
			if(cnt == b){
				ans = 0;
				//cout<<"true"<<endl;
			}else{
				if(b > cnt){
					ans = abs(b - cnt);
				}else{
					ans = abs(cnt - b);
				}
				
			}
			cout<<"Case #"<<t<<": "<<ans<<endl;
		}

		return 0;
	}
