//I Love You MOTI
// https://www.geeksforgeeks.org/median-of-two-sorted-arrays/
// https://www.geeksforgeeks.org/median-of-stream-of-integers-running-integers/
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
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    sort(a,a+n);

    if(n%2 == 0){
       // cout<<a[n/2 - 1]<<" "<<a[n/2]<<endl;
        cout<<(a[n/2 - 1]+a[n/2])/2<<endl;
    }else{
        cout<<a[n/2]<<endl;
    }
    
    // for(int i=0;i<n;i++){
    //   cout<<a[i]<<" ";
    // }
}