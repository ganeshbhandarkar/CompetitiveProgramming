#include <bits/stdc++.h>
#include <string.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    // code goes here
    string s;
    cin>>s;
    int A = 0,B = 0;
    int lstScoreA = 0,lstScoreB = 0;
    for(int i = 0;i<s.length();){
        if(s[i]=='A'){
            A += s[i+1] - '0';
            lstScoreA = s[i+1] - '0';
        }else if(s[i]=='B'){
            B += s[i+1] - '0';
            lstScoreB = s[i+1] - '0';//stoi(to_string(s[i+1]));
        }
        i+=2;
    }
    if(A>B) cout<<"A";
    else if(B>A) cout<<"B";
    else if(A==B){
        if(lstScoreA > lstScoreB){
            cout<<"A";
        }else{
            cout<<"B";
        }
    }
    return 0;
}