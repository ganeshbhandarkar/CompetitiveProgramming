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
    // int n ;
    // while( scanf("%d",&n) != EOF ){
    //     int Cnt = 0 ;
    //     for(int i=0;i<n;i++) {
    //         double len , wid , dep , wgth ;
    //         scanf("%lf %lf %lf %lf",&len , &wid , &dep ,&wgth);
    //         if( ( (len <= 56.00 && wid <= 45.00 && dep <= 25.00 ) || ( len + wid + dep <= 125.00 ) ) && wgth <= 7.00  )
    //         {
    //               Cnt++ ; puts("1");
    //         }
    //         else puts("0");
    //     }
    //     printf("%d\n",Cnt);
    // }
    int t;
    scanf("%d",&t);
    int cnt = 0;
    for(int i=0;i<t;i++){
    	double a,b,c,d;
    	scanf("%lf %lf %lf %lf",&a , &b , &c ,&d);
    	if(( (a <= 56.00 && b <= 45.00 && c <= 25.00 ) || ( a + b + c <= 125.00 ) ) && d <= 7.00 ){
    		cnt++;
    		puts("1");
    	}else{
    		puts("0");
    	}
    }
    printf("%d\n",cnt );
    return 0;
}