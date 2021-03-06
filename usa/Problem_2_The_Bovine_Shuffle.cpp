/*
ID: thegane1
PROG: prob_name
LANG: C++
*/
/*                                                                                                          `             
   +ooooooooooooooooosh`                                `-/++oo+/-                                        sd-           
                     .m`                              ://:-.````-ym/                                    `ym/            
                     .m`                                          /M+                                  :ds`             
              ./osoooom++++/-`                          y.         +My+s.                            `yh-               
           `+ys:`    .m`    .//:`                      oh           dN`od                           -dy://+:            
          +h/    -+ooom+/:`    `//`                   +m:::o        -Mdh-                           o+:.-sd+            
         ys`  `oh+.  .m` .://`   `o-                 `/-` +s         yM-                              :yh:              
        oy   -d/  .+ssm+/.  `+/    s-                  `/s:          .My                            :hh:                
        d.   h/  oh- .m` -o`  /+   `h                /o+.             hM/oy`                      .hd:                  
        d`   h-  y-  .m`//:s   h`   y-               ho:////oo        +M/:N`                     `mNo+//ods             
        s:   -s  .+/:/m+h/:h   d-   y/               `-`     ho       -Mmo`                       .`  -yh/              
        `s`   .+:`  .:m-./d:  /d   `m.                       so       `Nm                           :hh-                
         `+:    `:/++omso/`  +d.   ss                        m-        mN                         `ym:                  
           .//.      .m`  .+h+`   sy`                       /h         dN`                      `oNs`                   
              -//++//+mosso:    -ho                        /m`         mN                      `hm:                     
                   `.-m`     `/ys.                       .yh`         .Mh                     .dm.                      
                     .m..-/oys/`                     `-+hd:           +M:                     om/                       
                     `++/:-`                         ./:`            `No                      .s`                       
                                                                     ::                                        
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long;

// Type aliases
#define str string
#define vi vector<int>
#define pi pair<int,int>
#define vpi vector<pi>
#define si set<int>

// Vector Operations
#define sz(x) (int)(x).size()
#define pb push_back
#define all(x) begin(x), end(x)
#define sor(x) sort(all(x))
#define rev(x) reverse(all(x))
#define del(x, i) erase(begin(x)+i)
#define rem(x,i) erase(begin(x), begin(x)+i)

// Pairs
#define mp make_pair
#define sec second
#define fir first

// Sets and Maps
#define ins insert
#define ez erase
#define cnt count

// Math
const int MOD = 1e9+7;
const int MAX_INT = 2147483647;
const int MIN_INT = -2147483647;

// Permutation
#define possibilities(x) while(next_permutation(all(x))

// Loops
#define Trav(a,x) for (auto& a: x)
#define For(i,a,b) for (int i = (a); i < (b); ++i)

#define max3(a,b,c) max(a,max(b,c))

void setIO(string name = "shuffle") { // name is nonempty for USACO file I/O
    ios_base::sync_with_stdio(0); cin.tie(0); // see Fast Input & Output
    // alternatively, cin.tie(0)->sync_with_stdio(0);
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); // see Input & Output
        freopen((name+".out").c_str(), "w", stdout);
    }
}

int main() {
    setIO();
    int n;cin>>n;
    int a[n],b[n],ori[n];
    For(i,0,n){
        cin>>a[i];
        --a[i];
    }
    For(i,0,n){
        cin>>b[i];
    }
    For(i,0,3){
        For(j,0,n) ori[j]=b[a[j]];
        For(j,0,n) b[j] = ori[j];
    }
    For(i,0,n) cout<<b[i]<<endl;
    // vector< pair<int,int> > x;
    // For(i,0,n){
    //     x.pb(make_pair(a[i],b[i]));
    // }
    // sort(x.begin(),x.end());
    // For(i,0,n){
    //     cout<<x[i].second<<endl;
    // }

    
}