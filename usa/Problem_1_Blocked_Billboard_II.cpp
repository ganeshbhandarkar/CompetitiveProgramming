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

struct Rect {
  int x1,y1,x2,y2;
  int area() { return (y2-y1)*(x2-x1); }
};

int intersect(Rect p, Rect q){
  int xOverlap = max(0,min(p.x2,q.x2)-max(p.x1,q.x1));
  int yOverlap = max(0,min(p.y2,q.y2)-max(p.y1,q.y1));
  return xOverlap*yOverlap;
}

int main(){
  ifstream cin ("billboard.in");
  ofstream cout ("billboard.out");
  Rect a, b, t;  // billboards a, b, and the truck
  cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
  cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
  cin >> t.x1 >> t.y1 >> t.x2 >> t.y2;
  cout << a.area()+b.area()-intersect(a,t)-intersect(b,t) << endl;
  }