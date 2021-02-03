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
    int n;cin>>n;
    while(n--){
        int a[3],b[3];
        cin>>a[0]>>a[1]>>a[2];
        cin>>b[0]>>b[1]>>b[2];
        sort(a,a+3);
        sort(b,b+3);
        int sum = 0;
        for(int i=0;i<3;i++){
            sum += a[i]*b[i];
        }
        cout<<sum<<endl;
    }
}