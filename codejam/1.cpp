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
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
    	int n;cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++){
    		// int x;cin>>x;
    		// a.eb(x);
    		cin>>a[i];
    	}
    	int idx,cst = 0;
    	for(int i=0;i<n;i++){
    		int* j;
    		j = std::min_element(a + i, a + n);;
    		// cout<<*j<<endl;
    		for(int k=i;k<n;k++){
    			if(a[k]==*j){
    				idx = k;
    				break;
    			}
    		}
    		reverse(a+i,a+idx+1);
    		cst += (idx-i) + 1;     		
    	}
    	cout<<"Case #"<<t<<": "<<cst - 1<<endl;
    }
    return 0;
}