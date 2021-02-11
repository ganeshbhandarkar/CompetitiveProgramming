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
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool chk = false;
        for(int i=0,j=n-1;i<=j;i++,j--){
            int val1= a[i]-a[i+1];
            int val2=a[j]-a[j-1];
            if(a[i] > 7 or a[j] > 7 or a[i] != a[j] or (val1<-1 && val2<-1)){
                chk = true;
                break;
            }
        }
        cout<<((chk) ? "no" : "yes")<<endl;
    }
}