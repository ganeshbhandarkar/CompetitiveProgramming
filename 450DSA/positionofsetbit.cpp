// https://www.geeksforgeeks.org/find-position-of-the-only-set-bit/
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
int isPowerOfTwo(unsigned n)
{
    return n && (!(n & (n - 1)));
}

class Solution {
  public:
    int findPosition(int N) {
        // code here
        int c = __builtin_popcount(N);
        if(c > 1){
            return -1;
        }else{
            int cnt = 0;
            while(N>0){
                if(N&1){
                    return  cnt+1;
                }else{
                    cnt++;
                }
                N>>=1;
            }
        }
        return -1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}  // } Driver Code Ends