#include <bits/stdc++.h>
using namespace std;

using ll = long long; 
using vi = vector<int>; 
using pii = pair<int,int>; 
#define f first
#define s second
#define eb emplace_back
#define IO(NAME) cin.tie(0)->sync_with_stdio(0); if(fopen(NAME ".in", "r")) freopen(NAME ".in", "r", stdin), freopen(NAME ".in", "w", stdout); 
bool is_integer(float n){
	return floor(n)==n;
}
// bool comp(int a,int b){
// 	if(is_integer((a+b)/2)){
// 		return false;
// 	}
// 	return true;
// }
int main() {
    IO("");
    int t;cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++)cin>>a[i];
    	
    	for(int i=0;i<n;i++){
    		if(a[i]&1){
    			cout<<a[i]<<" ";
    		}    		
    	}
    	for(int i=0;i<n;i++){
    		if(a[i]%2==0){
    			cout<<a[i]<<" ";
    		}
    	}
    	cout<<endl;
    }
    
}