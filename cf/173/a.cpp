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
    int a = 0;
    while(n--){
    	string s;
    	cin>>s;
    	if(s == "X++" or s == "++X"){
    		a++;
    	}else{
    		a--;
    	}
    }
    cout<<a<<endl;
}