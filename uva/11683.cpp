#include <bits/stdc++.h>
using namespace std;

using ll = long long; 
using vi = vector<int>; 
using pii = pair<int,int>; 
#define f first
#define s second
#define eb emplace_back
#define IO(NAME) cin.tie(0)->sync_with_stdio(0); if(fopen(NAME ".in", "r")) freopen(NAME ".in", "r", stdin), freopen(NAME ".in", "w", stdout); 

int main() {
    IO("");
   	int a,c;
   	while((scanf("%d%d",&a,&c)) &&  (a != 0)){
   		int cnt = 0;
   		int x = a;
   		int m;
   		for(int i=0;i<c;i++){
   			scanf("%d",&m);
   			cnt = cnt + max(0,m - x);
   			x = m;
   		}
   		cnt += max(0,a - x);
   		printf("%d\n", cnt );;
   	}
}