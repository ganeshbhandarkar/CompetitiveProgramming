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
    int n;
    cin>>n;
    while(n--){
    	string s;
    	cin>>s;
    	stack<int> st;
    	int ans = 0;
    	for(int i=0;i<s.size();i++){
    			if(s[i] == '\\' ){
    				st.push(i); 
    			}
    			else if(s[i]=='/' && !st.empty()){
    				ans += i - st.top();
    				st.pop();
    			}
    	}
    	cout<<ans<<endl;
    }
}