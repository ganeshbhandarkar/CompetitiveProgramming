
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
	int r,c;
	int main()
	{
		int T;
		cin>>T;
		for(int t=1;t<=T;t++)
		{
			ll ans=0;
			
			cin>>r>>c;
			int a[r][c];
			for(int i=0;i<r;i++){
				for(int j=0;j<c;j++){
					cin>>a[i][j];
				}
			}
			int cnt = 0,prev = 0;
			if(r == 1){
				for(int j=0;j<c-1;j++){
					int i = 0;
					if (abs(a[i][j] - a[i][j+1]) > 1){
						if(a[i][j] > a[i][j+1]){
							prev = a[i][j+1];
							a[i][j+1] = a[i][j] - 1;
							cnt += abs(prev - a[i][j+1]); 
						}else{
							prev = a[i][j];
							a[i][j] = a[i][j+1] - 1;
							cnt += abs(prev - a[i][j]);
						}
						prev = 0;
					}
				}
			}
			if(c == 1){
				for(int i=0;i<r-1;i++){
					int j = 0;
					if (abs(a[i][j] - a[i+1][j]) > 1){
						if(a[i][j] > a[i+1][j]){
							prev = a[i+1][j];
							a[i+1][j] = a[i][j] - 1;
							cnt += abs(prev - a[i+1][j]); 
						}else{
							prev = a[i][j];
							a[i][j] = a[i+1][j] - 1;
							cnt += abs(prev - a[i][j]);
							
						}
						prev = 0;
					}	
				}
			}
			for(int i=0;i<r;i++){
				for(int j=0;j<c;j++){
					if (i < 1 || i >= r || j < 1 || j >= c){
						continue;
					}
					if(abs(a[i][j]-a[i][j-1]) == 1){
						continue;
					}
					if(abs(a[i][j]-a[i][j+1]) == 1){
						continue;
					}
					if(abs(a[i][j]-a[i+1][j]) == 1){
						continue;
					}
					if(abs(a[i][j]-a[i-1][j]) == 1){
						continue;
					}
					if(a[i][j]==a[i][j-1]){
						a[i][j-1] += 1;
						cnt++;
					}
					if(a[i][j]==a[i][j+1]){
						a[i][j+1] += 1;
						cnt++;
					}
					if(a[i][j] == a[i-1][j]){
						a[i-1][j] += 1;
						cnt++;
					}
					if(a[i][j] == a[i+1][j]){
						a[i+1][j] += 1;
						cnt++;
					}
					if (abs(a[i][j] - a[i][j-1]) > 1){
						if(a[i][j] > a[i][j-1]){
							prev = a[i][j-1];
							a[i][j-1] = a[i][j] - 1;
							cnt += abs(prev - a[i][j-1]); 
						}
						else{
							prev = a[i][j];
							a[i][j] = a[i][j-1] - 1;
							cnt += abs(prev - a[i][j]);
						}
						prev = 0;
					}
					if (abs(a[i][j] - a[i][j+1]) > 1){
						if(a[i][j] > a[i][j+1]){
							prev = a[i][j+1];
							a[i][j+1] = a[i][j] - 1;
							cnt += abs(prev - a[i][j+1]); 
						}else{
							prev = a[i][j];
							a[i][j] = a[i][j+1] - 1;
							cnt += abs(prev - a[i][j]);
						}
						prev = 0;
					}
					if (abs(a[i][j] - a[i-1][j]) > 1){
						if(a[i][j] > a[i-1][j]){
							prev = a[i-1][j];
							a[i-1][j] = a[i][j] - 1;
							cnt += abs(prev - a[i-1][j]); 
						}else{
							prev = a[i][j];
							a[i][j] = a[i-1][j] - 1;
							cnt += abs(prev - a[i][j]);
						}
						prev = 0;
					}
					if (abs(a[i][j] - a[i+1][j]) > 1){
						if(a[i][j] > a[i+1][j]){
							prev = a[i+1][j];
							a[i+1][j] = a[i][j] - 1;
							cnt += abs(prev - a[i+1][j]); 
						}else{
							prev = a[i][j];
							a[i][j] = a[i+1][j] - 1;
							cnt += abs(prev - a[i][j]);
							
						}
						prev = 0;
					}				
				}
			}
			if(cnt == 0){
				ans = 0;
			}else{
				ans = cnt;
			}
			cout<<"Case #"<<t<<": "<<ans<<endl;
		}

		return 0;
	}
