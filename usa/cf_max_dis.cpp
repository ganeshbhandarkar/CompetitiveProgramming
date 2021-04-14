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
    int a[n],b[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	//if(a[i]<0)a[i]*=-1;
    }
    for(int i=0;i<n;i++){
    	cin>>b[i];
    	//if(b[i]<0)b[i]*=-1;
    }
    auto mb = *max_element(b,b+n);
    auto ma = *min_element(a,a+n);
    cout<<(mb-ma)*(mb-ma)<<endl;
}