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
    int t;cin>>t;
    while(t--){
    	int cnd;cin>>cnd;
    	int a[105];
    	int sum = 0;
    	for(int i=1;i<=cnd;i++){
    		char ss[10];
    		cin>>ss;
    		//cout<<ss<<endl;
    		char l[] = "LEFT";
    		char r[] = "RIGHT";
    		if(strcmp(ss, l) == 0){
    			a[i] = -1;
    			sum--;
    		}else if(strcmp(ss, r) == 0){
    			a[i] = 1;
    			sum++;
    		}else{
    			string r;
    			int w;
    			cin>>r>>w;
    			// sum += a[(w[w.length()-1] - '0') - 1];
    			// a[i] = a[(w[w.length()-1] - '0') - 1];
    			a[i] = a[w];
    			if(a[i] == 1){
    				sum++;
    			}else if(a[i]== -1){
    				sum--;
    			}
    		}
    	}
    	cout<<sum<<endl;
    }
}