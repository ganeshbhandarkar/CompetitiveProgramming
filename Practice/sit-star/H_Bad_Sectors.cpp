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
    for(int i=0;i<s.length()-k;){
        if(s[i]=='*' and s[i+k]=='.'){
            for(int j=i;j<i+k+1;j++){
                s[j] = '*';
            }
            // s.replace(i,i+k+1,rep);
            // //cin.ignore();
            // cout<<s<<endl;
            // //cout<<i<<" ";
            i++;
        }else{
            i++;
        }
    }
    // for(int i=s.length();i>=1;){
    //     if(s[i] == '*' and s[i-1]=='.'){
    //         s.replace(i,1,k,'*');
    //     }
    // }
    cout<<s<<endl;
    
}