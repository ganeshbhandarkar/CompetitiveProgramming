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
    	int n;
    	cin>>n;
    	int a[n];for(int i=0;i<n;i++)cin>>a[i];
    	int cnt = 0;
    	// tle
    	// for(int i=0;i<n-1;i++){
    	// 	int m = i;
    	// 	for(int j=i+1;j<n;j++){
    	// 		if(a[m]>a[j]){
    	// 			m = j;
    	// 			cnt++;
    	// 		}
    	// 	}
    	// 	swap(a[m],a[i]);
    	// }
    	vector<int> xx(a,a+n);
    	sort(xx.begin(),xx.end());
    	for(int i=0;i<xx.size();i++){
    		if(xx[i]!=a[i])cnt++;
    	}
    	int ch = 0;
    	for(int i=1;i<n;i++){
    		if(a[i]==a[i-1]){
    			ch = 1;
    			break;
    		}
    	}
    	if(cnt == 2){
    		cout<<"YES"<<endl;
    	}else if(cnt == 0 and ch == 1){
    		cout<<"YES"<<endl;
    	}else{
    		cout<<"NO"<<endl;
    	}
    }
}