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

void setIO(string name = "word") { // name is nonempty for USACO file I/O
    ios_base::sync_with_stdio(0); cin.tie(0); // see Fast Input & Output
    // alternatively, cin.tie(0)->sync_with_stdio(0);
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); // see Input & Output
        freopen((name+".out").c_str(), "w", stdout);
    }
}

int main() {
    setIO();
    int n,k;cin>>n>>k;
    string s;
    int cnt = 0;
    for(int i=0;i<n;i++){
        cin>>s;
        if(cnt + s.length() > k){
            cout<<endl<<s;
            cnt = s.length();
        }else{
            if(cnt==0){
                cout<<s;
            }else{
                cout<<" "<<s;
            }
            cnt += s.length();
        }
    }
    
}