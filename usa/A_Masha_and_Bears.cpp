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
    int a[4];
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    for(int i=1;i<4;i++){
        if(2*a[i]<a[i-1]){
            return puts("-1"),0; 
        }
    }
    cout<<a[0]<<"\n"<<a[1]<<"\n"<<a[2];
    return 0;
}