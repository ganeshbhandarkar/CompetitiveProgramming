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
    int n = 6;
    int a[n];
    int sum =0 ;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum += a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(sum == (a[i]+a[j]+a[k])*2){
                    return puts("YES"),0;
                }
            }
        }
    }
    puts("NO");
    return 0;
}