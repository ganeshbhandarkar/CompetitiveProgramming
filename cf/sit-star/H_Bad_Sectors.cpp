//I Love You MOTI
#include <bits/stdc++.h>
#include<string>
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
    int n,k;cin>>n>>k;
    string s;cin>>s;
    string rep = "";
    for(int i =0;i<k;i++){
        rep += "*";
    }
    for(int i=1;i<s.length()-1;){
        
    }
    // for(int i=s.length();i>=1;){
    //     if(s[i] == '*' and s[i-1]=='.'){
    //         s.replace(i,1,k,'*');
    //     }
    // }
    cout<<s<<endl;
    
}