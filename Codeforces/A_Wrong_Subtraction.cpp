#include<bits/stdc++.h>
using namespace std;
 
 
 
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= k; i++){
        int x = n % 10;
        if(x != 0){
            n -= 1;
        }
        else{
            n /= 10;
        }
    }
    cout << n;
}