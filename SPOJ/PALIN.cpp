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
    while(n--){
    	int x;cin>>x;
    	
    	int ch = 1;
    	while(ch){
    		x++;
    		string rr = to_string(x);
    		string rev = string(rr.rbegin(),rr.rend());
    		
    		if(rev==rr){
    			cout<<rr<<endl;
    			ch = 0;
    			break;
    		}
    	}
    }
    return 0;
}