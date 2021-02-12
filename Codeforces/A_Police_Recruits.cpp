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

int main() {
    IO("");
    int n;cin>>n;
    int x = 0,y = 0;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        if(a == -1){
            //cout<<"x "<<x<<endl;
            x++;
            if(y>0){
                y -= 1;
                x--;
                //cout<<"y "<<y<<endl;
            }
        }else{
            y += a;
            //cout<<"y "<<y<<endl;
        }
    }
    cout<<x<<endl;
}