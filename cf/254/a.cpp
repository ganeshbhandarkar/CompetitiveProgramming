#include <bits/stdc++.h>
using namespace std;

using ll = long long; 
using vi = vector<int>; 
using pii = pair<int,int>; 
#define f first
#define s second
#define eb emplace_back
#define IO(NAME) cin.tie(0)->sync_with_stdio(0); if(fopen(NAME ".in", "r")) freopen(NAME ".in", "r", stdin), freopen(NAME ".in", "w", stdout); 
bool w = false;
bool x = true;
int main() {
    IO("");
    int r,c;cin>>r>>c;
    char a[r][c];
    for(int i=0;i<r;i++){
    	for(int j=0;j<c;j++){
    		cin>>a[i][j];
    	}
    }
    
    
    for(int i=0;i<r;i++){
    	for(int j=0;j<c;j++){
    		//if(i>0 && i<r && j>0 && j<c){
    		if(a[i][j] == '.'){
    			if((i+j) & 1){
    				a[i][j] = 'B';
    			}else{
    				a[i][j] = 'W';
    			}
    		}
    		
    			// if(a[i][j] == '.'  && a[i][j+1] != 'B' && a[i-1][j] != 'B' && a[i+1][j] != 'B' && a[i][j-1] != 'B'){
    			// 	a[i][j] = 'B';

    			// }else if(a[i][j]){
    			// 	a[i][j] = 'W';
    			// }
    		//}
    	}
    }
    for(int i=0;i<r;i++){
    	for(int j=0;j<c;j++){
    		cout<<a[i][j];
    	}
    	cout<<endl;
    }
}