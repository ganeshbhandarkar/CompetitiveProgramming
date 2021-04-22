#include <bits/stdc++.h>
using namespace std;

using ll = long long; 
using vi = vector<int>; 
using pii = pair<int,int>; 
#define f first
#define s second
#define eb emplace_back
#define IO(NAME) cin.tie(0)->sync_with_stdio(0); if(fopen(NAME ".in", "r")) freopen(NAME ".in", "r", stdin), freopen(NAME ".in", "w", stdout); 

set<vector<string>> s;
void perm(vector<string> ss,int i,int n){
	if(ss.size()==i){
		s.insert(ss);
	}
	for(int j=i;j<n;j++){			
		swap(ss[i],ss[j]);
		perm(ss,i+1,n);
		swap(ss[i],ss[j]);
	}
}

int main() {
    IO("");
   	vector<string> v = {"ab","bc","cd"};
   	perm(v,0,v.size());
   	for(auto i:s){
   		for(auto j:i){
   			cout<<j<<" ";
   		}
   		cout<<endl;
   	}
}