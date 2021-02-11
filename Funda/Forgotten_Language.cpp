//I Love You MOTI
#include <bits/stdc++.h>
using namespace std;

using ll = long long; 
using vi = vector<int>; 
using pii = pair<int,int>; 
#define f first
#define s second
#define eb emplace_back
#define IO(NAME) cin.tie(0)->sync_with_stdio(0); if(fopen(NAME ".in", "r")) freopen(NAME ".in", "r", stdin), freopen(NAME ".in", "w", stdout); 
#define TT(tt) int tt;cin>>tt;while(tt--)

int main() {
    IO("");
    TT(tt){
        int n,k;cin>>n>>k;
        vector<string> s;
        map<string, int> m;
        for(int i=0;i<n;i++){
            string e;
            cin>>e;
            s.push_back(e);
            m[e]++;
        }
        
        for(int i=0;i<k;i++){
            int x;cin>>x;
            for(int j=0;j<x;j++){
                string r;
                cin>>r;
                m[r]++;
            }      
        }
        for(auto i : s){
            if(m[i]>1){
                cout<<"YES"<<" ";
            }else{
                cout<<"NO"<<" ";
            }
        }
        cout<<endl;
    }
}