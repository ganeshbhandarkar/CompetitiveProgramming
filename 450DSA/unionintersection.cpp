//I Love You MOTI
// https://www.geeksforgeeks.org/find-union-and-intersection-of-two-unsorted-arrays/
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
    int n,b;cin>>n>>b;
    int a,c;
    set<int> s;
    for(int i=0;i<n;i++){
      cin>>a;
      s.insert(a);
    }
    for(int i=0;i<b;i++){
      cin>>c;
      s.insert(c);
    }
    cout<<s.size()<<endl;
    
    // for(int i=0;i<n;i++){
    //   cout<<a[i]<<" ";
    // }
}