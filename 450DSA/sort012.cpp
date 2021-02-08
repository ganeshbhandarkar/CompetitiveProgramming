//I Love You MOTI
// https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/

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
    int p[3] = {0};
    for(int i=0;i<n;i++){
      cin>>a[i];
      p[a[i]]++;
    }

    int i=0;
    while(p[0]>0){
        a[i]=0;
        p[0]--;
        i++;
    }
    while(p[1]>0){
        a[i]=1;
        p[1]--;
        i++;
    }
    while(p[2]>0){
        a[i]=2;
        p[2]--;
        i++;
    }
    
    
    for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
    }
}