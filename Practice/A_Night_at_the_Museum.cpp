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
    //string s = "abcdefghijklmnoqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
    string a;cin>>a;
    int stps = 0;
    int str = 0;
    for(int i=0;i<a.length();i++){
        int cur = a[i] - 97;
        stps += min(abs(cur - str),26 - abs(cur - str));
        str = cur;
    }
    cout<<stps;
    // char ini = s[26];
    // int cn = 26;
    // int cnta = 0,cntb = 0,cnt = 0;
    // for(int i=0;i<a.length();i++){
    //     char end = a[i];
    //     for(int j = cn;j>=0;j--){
    //         cnta++;
    //         if(s[j] == end){
    //             break;
    //         }
    //     }
    //     for(int j = cn;j<26;j++){
    //         cntb++;
    //         if(s[j] == end){
    //             break;
    //         }
    //     }
    //     cnt += min(cnta,cntb);
    //     cn = end;
    //     cnta = 0;cntb=0;
    // }
}