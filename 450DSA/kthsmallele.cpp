//I Love You MOTI

// https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array-set-2-expected-linear-time/
// https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array-set-3-worst-case-linear-time/
// https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array/
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
    int k;cin>>k;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    
    sort(a,a+n);

    cout<<a[k-1];
    
    // for(int i=0;i<n;i++){
    //   cout<<a[i]<<" ";
    // }
}