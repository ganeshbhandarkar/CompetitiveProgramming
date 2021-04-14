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
    //IO("");
    int t;
    cin>>t;
    while(t--){
    	int n;cin>>n;
	    map<long long int, int> m;
	    for(int i=0;i<n;i++){
	    	int c;cin>>c;
	    	m[c]++;
	    }
	    long long int x = 0;
	    for(auto i:m){
	    	if(i.second == 3){
	    		x = i.first;
	    		break;
	    	}	    	
	    }
	    cout<<x+x+x<<endl;
	    m.clear();
    }
    return 0;
}