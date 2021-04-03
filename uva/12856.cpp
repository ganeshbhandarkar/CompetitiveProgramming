#include <bits/stdc++.h>
using namespace std;

using ll = long long; 
using vi = vector<int>; 
using pii = pair<int,int>; 
#define rep(i,n) for( __typeof(n)i = 0 ; i < n ; i++)
#define f first
#define s second
#define eb emplace_back
#define IO(NAME) cin.tie(0)->sync_with_stdio(0); if(fopen(NAME ".in", "r")) freopen(NAME ".in", "r", stdin), freopen(NAME ".in", "w", stdout); 

int main() {
    IO("");
    int n ;
    char s[110][110];
    cin>>n;
        rep(i,5) cin >> s[i];
        for(int i = 0;i<4*n;i+=4){
            if(s[0][i]=='.') cout << 1;
            else if(s[3][i] == '*') cout << 2;
            else cout << 3;
        }
        puts("");

    
    return 0;
}