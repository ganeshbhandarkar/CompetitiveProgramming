
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
    /*   श्री छोटे बाबा   */
    int t;
    cin>>t;
    while(t--){
    	int n;cin>>n;
    	int p=0,np=0;
    	int a[n];
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    		int nn = sqrt(a[i]);
    		if(nn*nn == a[i]) p++;
    		else np++;
    	}
    	if(np>0)cout<<"YES"<<endl;
    	else cout<<"NO"<<endl;
    }
}