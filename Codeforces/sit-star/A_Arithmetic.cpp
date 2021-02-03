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
        int a,b,c;cin>>a>>b>>c;
        if(a*b == c){
            cout<<"YES"<<"\n";
            cout<<a<<" "<<b<<" "<<c<<"\n";
        }else if(a*c == b){
            cout<<"YES"<<"\n";
            cout<<a<<" "<<c<<" "<<b<<"\n";
        }else if(b*c == a){
            cout<<"YES"<<"\n";
            cout<<b<<" "<<c<<" "<<a<<"\n";
        }else{
            cout<<"NO"<<endl;
        }
    }
}