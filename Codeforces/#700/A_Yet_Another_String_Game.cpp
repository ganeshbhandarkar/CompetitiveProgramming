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

int main() {
    IO("");
    int n;
    cin>>n;
    while(n--){
        string s;
        string ans = "";
        cin>>s;
        if(s.size()==1){
            if(s[0]=='a'){
                s[0]= s[0]+1;
                cout<<s[0]<<endl;
            }else{
                s[0]= s[0]-1;
                cout<<s[0]<<endl;
            }
        }else{
            for(int i=0;i<s.length();i++){
                if(i&1){
                    if(s[i]=='z'){
                        ans += s[i] - 1;
                    }else{
                        ans += 'z';
                    }
                }else{
                    if(s[i]=='a'){
                        ans += s[i] + 1;
                    }else{
                        ans += 'a';
                    }
                }
            }
            cout<<ans<<endl;
        }
        
    }
}