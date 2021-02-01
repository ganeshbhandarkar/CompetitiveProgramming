/*
ID: thegane1
TASK: ride
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

void setIO(string name = "ride") { 
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin);
        freopen((name+".out").c_str(), "w", stdout);
    }
}

int main() {
    setIO();
    int ac=1,bc=1;
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.size();i++) ac*= (a[i] - 'A' + 1);
    for(int i=0;i<b.size();i++) bc*= (b[i] - 'A' + 1);
    if(ac%47 == bc%47) cout<<"GO"<<endl;
    else{
        cout<<"STAY"<<endl;
    }
}