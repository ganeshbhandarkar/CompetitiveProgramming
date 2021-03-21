#include <bits/stdc++.h>
using namespace std;

using ll = long long; 
using vi = vector<int>; 
using pii = pair<int,int>; 
#define f first
#define s second
#define eb emplace_back
#define IO(NAME) cin.tie(0)->sync_with_stdio(0); if(fopen(NAME ".in", "r")) freopen(NAME ".in", "r", stdin), freopen(NAME ".in", "w", stdout); 
ll summer(ll A,ll B, ll M){
    if (A % M == 0) 
        return (B / M) - (A / M) + 1; 
  
    // A is not divisible by M 
    return (B / M) - (A / M); 
}
int main() {
    IO("");
    int t;cin>>t;
    while(t--){
        int x;cin>>x;
        ll sum = 0;
        if (x == 4) cout<<8<<endl;
        else{
            sum = summer(1,x,5)*5 + (summer(1,x,3)-summer(1,x,15))*3 + (summer(1,x,2) - summer(1,x,6) - summer(1,x,10))*2 + (x - summer(1,x,5) - summer(1,x,3) - summer(1,x,2) + summer(1,x,6) + summer(1,x,15) + summer(1,x,30) + summer(1,x,10));//- summer(1,x,3) - summer(1,x,2);//; - summer(1,x,5) - summer(1,x,3) - summer(1,x,2));       
            cout<<sum;
            cout<<"\n";
        }
        
    }

}