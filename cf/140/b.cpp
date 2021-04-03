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
    int n;cin>>n;
    map<ll,pair<ll,ll>> m;
    int a[n];for(int i=0;i<n;i++){
    	cin>>a[i];
    	m[a[i]]= {i+1,n - i};
    }
    int q;cin>>q;
    ll cnt = 0,cnt2 = 0;
    while(q--){
    	int c;cin>>c;
    	cnt += m[c].first;
    	cnt2 += m[c].second;	    
    }
    cout<<cnt<<" "<<cnt2;
}