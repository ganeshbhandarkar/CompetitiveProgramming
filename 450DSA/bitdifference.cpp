// https://www.geeksforgeeks.org/count-number-of-bits-to-be-flipped-to-convert-a-to-b/
// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

// Function to find number of bits to be flip
// to convert A to B
int countBitsFlip(int a, int b){
    
    // Your logic here
    int cnt = 0;
    int x = a^b;
    while(x>0){
        if(x&1){
            cnt++;
        }
        x>>=1;
    }
    return cnt;
}

// { Driver Code Starts.

// Driver Code
int main()
{
	int t;
	cin>>t;// input the testcases
	while(t--) //while testcases exist
	{
		int a,b;
		cin>>a>>b; //input a and b

		cout<<countBitsFlip(a, b)<<endl;
	}
	return 0;
}  // } Driver Code Ends