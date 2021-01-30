/*
ID: thegane1
PROG: prob_name
LANG: C++
*/
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

void setIO(string name = "square") { // name is nonempty for USACO file I/O
    ios_base::sync_with_stdio(0); cin.tie(0); // see Fast Input & Output
    // alternatively, cin.tie(0)->sync_with_stdio(0);
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); // see Input & Output
        freopen((name+".out").c_str(), "w", stdout);
    }
}

int main() {
    setIO();

    int a,b,c,d,e,f,g,h;
    cin>>a>>b>>c>>d;
    cin>>e>>f>>g>>h;
    int sx,lx,sy,ly;
    lx = max(a,max(c,max(e,f)));
    ly = max(b,max(d,max(f,h)));
    sx = min(a,min(c,min(e,f)));
    sy = min(b,max(d,max(f,h)));

    int ans = max(ly-sy,lx-sx);
    cout<<ans*ans<<endl;

}