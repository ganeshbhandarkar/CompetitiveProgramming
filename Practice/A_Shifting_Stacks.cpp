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
// char to int : [c[i]-'a']
void solve(){
    int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        //sort(a,a+n);
        for(int i=1;i<n;i++){
                a[i-1] -= i;
                a[i] += i;
        }
        
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                cout<<"NO"<<endl;
                return ;
            }
        }
        cout<<"YES"<<endl;
}
int main() {
    IO("");
    TT(tt){
        solve();
    }
}