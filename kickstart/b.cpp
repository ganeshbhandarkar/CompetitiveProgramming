
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
			int r,c;
			cin>>r>>c;
			int a[r][c];
			for(int i=0;i<r;i++){
				for(int j=0;j<c;j++){
					cin>>a[i][j];
				}
			}

			for(int i=0;i<r;i++){
				for(int j = 0;j<c;j++){

					if(r >= 4){
						for(int k=i;k<r;k++){
							
						}
					}

					if(c >= 4){
						for(int k=i;k<r;k++){

						}
					}
					
				}
			}

			cout<<"Case #"<<t<<": "<<ans<<endl;
		}

		return 0;
	}
