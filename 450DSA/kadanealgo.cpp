// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1#
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// minimal effort
int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int ans = 0;
    int cur = 0;
    for(int i=0;i<n;i++){
        if(cur+arr[i]<0){
            cur = 0;
        }else{
            cur += arr[i];
            ans = max(ans,cur);
        }
    }
    return ans;
}
// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int ans = arr[0];
    int cur = arr[0];
    for(int i=1;i<n;i++){
        cur = max(arr[i],cur+arr[i]);
        ans = max(cur,ans);
    }
    return ans;
}

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
        
        cout << maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends