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
    int a,b,c;cin>>a>>b>>c;
    int mx = max(a,max(b,c));
    int mi = min(a,min(b,c));
    if(a==mx or a==mi){
        cout<<mx-mi;
        return 0;
    }else{
        int dis1 = abs(a-b);
        int dis2 = abs(a-c);
        cout<<2*min(dis1,dis2)+max(dis1,dis2);
    }
    // int x= min(b,c);
    // int y = max(b,c);
    // if(a<=x and a<=y){
    //     ans = ans + abs(y-a);
    // }else if(x<=a and y>=a){
    //     ans = ans + abs(y-a) + abs(y-x);
    // }else if(a>=y and a>=x){
    //     ans = ans + abs(a-y) + abs(y-x);
    // }
    // if(a<=b and b<=c and a<=c){
    //     ans=ans +(b-a) + (c-b);
    // }else if(a>=b and b<=c and a<=c){
    //     ans = ans + (c-a) + (c-b);
    // }else if(a>=b and a>=c and b>=c){
    //     ans = ans + (a-b) + (b-c);
    // }else if(a<=b and a>=c){
    //     ans = ans + abs(a-b) + abs(c-b);
    // }
    // cout<<ans;
}