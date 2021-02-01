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
    int n,m;
    cin>>n>>m;
    string s,t;
    vector<int> ans,curr;
    cin>>s;
    cin>>t;
    cin.ignore();
    for(int i=0;i<m-n+1;i++){
        for(int j = 0;j<s.size();j++){
            if(s[i]==t[i+j]){
                curr.eb(i);
            }
            if(curr.size() > ans.size()){
                ans = curr;
            }
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]+1<<" ";
    }
    return 0;
}