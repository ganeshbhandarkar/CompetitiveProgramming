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

#define vi vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

#define pi pair<int,int>
#define f first
#define s second
#define mp make_pair

#define max3(a,b,c) max(a,max(b,c))

void setIO(string name = "shell") { // name is nonempty for USACO file I/O
    ios_base::sync_with_stdio(0); cin.tie(0); // see Fast Input & Output
    // alternatively, cin.tie(0)->sync_with_stdio(0);
    if (sz(name)) {
        freopen((name+".in").c_str(), "r", stdin); // see Input & Output
        freopen((name+".out").c_str(), "w", stdout);
    }
}

int main() {
    setIO();
    int n;
    cin>>n;
    int x[n],y[n];
    memset(y,0,sizeof(y));
    for(int i =0 ;i<n;i++) x[i]=i;
    for(int i=0;i<n;i++){
        int a,b,e;cin>>a>>b>>e;
        --a;--b;--e;
        swap(x[a],x[b]);
        y[x[e]]++;
    }
    cout<<max3(y[0],y[1],y[2]);
    
}