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
    int n,a,b;   
    cin>>n>>a>>b;
    int k;   
    int ans = 0;
    int c = 0;
    for(int i=0;i<n;i++){
        cin>>k;
        if(k>1){
            if(b)b--;
            else ans+=2;
        }else{
            if(a)a--;
            else if(b)b--,c++;
            else if(c)c--;
            else ans++;
        }
    }
    return cout<<ans,0 ;
}