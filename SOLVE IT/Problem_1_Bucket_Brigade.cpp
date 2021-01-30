#include <bits/stdc++.h>
using namespace std;

#define ll long long;

#define vi vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

#define pi pair<int,int>
#define f first
#define s second
#define mp make_pair

void setIO(string name = "buckets") { // name is nonempty for USACO file I/O
    ios_base::sync_with_stdio(0); cin.tie(0); // see Fast Input & Output
    // alternatively, cin.tie(0)->sync_with_stdio(0);
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); // see Input & Output
        freopen((name+".out").c_str(), "w", stdout);
    }
}

int main() {
    setIO();
    string s;
    int b_i,b_j,l_i,l_j,r_i,r_j;
    for(int i=0;i<10;i++){
        cin>>s;
        for(int j=0;j<s.length();j++){
            if(s[j]=='B'){
                b_i = i;b_j = j;
            }
            if(s[j]=='R'){
                r_i = i;r_j = j;
            }
            if(s[j]=='L'){
                l_i = i;l_j = j;
            }
        }
    }

    int br = abs(b_i - r_i) + abs(b_j - r_j);
    int bl = abs(b_i - l_i) + abs(b_j - l_j);
    int rl = abs(l_i - r_i) + abs(l_j - r_j);

    // special case of rock in between
    if((b_i == l_i || b_j == l_j) && bl == br + rl ){
        cout<<bl + 1;
    }else{
        cout<<bl - 1; 
    }
    
}