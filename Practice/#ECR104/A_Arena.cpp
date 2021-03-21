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
    TT(tt){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        int b[100] = {0};
        for(int i=0;i<n;i++){
            for(int j = i+1;j<n;j++){
                if(a[i]>a[j]){
                    b[i] = 1;
                }else if(a[j] > a[i]){
                    b[j] = 1;
                }
            }
        }
        int cnt = 0;
        for(int i =0;i<100;i++){
            if(b[i]==1){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}