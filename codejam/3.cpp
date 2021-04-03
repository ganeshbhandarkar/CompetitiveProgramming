#include <bits/stdc++.h>
using namespace std;

using ll = long long; 
using vi = vector<int>; 
using pii = pair<int,int>; 
#define f first
#define s second
#define eb emplace_back
#define IO(NAME) cin.tie(0)->sync_with_stdio(0); if(fopen(NAME ".in", "r")) freopen(NAME ".in", "r", stdin), freopen(NAME ".in", "w", stdout); 

int main() {
    IO("");
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        cout<<"Case #"<<t<<": ";
        
        int n,tot;
        cin>>n>>tot;
        
        vector<int>AA;
        int f=0;
        for(int i=1;i<=n;++i){
            AA.push_back(i);
        }
        
        do{
            long long ans=0;
            long long A[n];
            for(int i=0;i<n;++i){
                A[i]=AA[i];
            }
        for(int i=0;i<n-1;++i){
            long long temp=A[i];
            int index=i;
            for(int j=i+1;j<n;++j){
                if(A[j]<temp){
                    temp=A[j];
                    index=j;
                }
            }
            if(index==i)ans++;
            else{
                index++;
                reverse(A+i,A+index);
                ans+=(index-i);
            }
        }
        
        if(ans==tot){
            f=1;break;
        }
        }while(next_permutation(AA.begin(),AA.end()));
         
         if(f==0)cout<<"IMPOSSIBLE"<<endl;
         else{
             for(auto x:AA)cout<<x<<" ";
             cout<<endl;
         }
    }
}