// { Driver Code Starts
// https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number3051/1#
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find missing integer in array
// arr: input array
// n: size of array
int findMissing(int arr[], int n) { 
    
    // Your code here
    //     return ans;
    // }
    map<int,int> m;
    for(int i=0;i<n;i++){
        if(arr[i]>0)
            m[arr[i]] = 1;
    }
    int r = 1;
    for(auto i : m){
        if(i.first != r){
            return r;
        }
        r++;
    }
    return n+1;
    // int mi = INT_MAX;
    // int ma = INT_MIN;
    // sort(arr,arr+n);
    // for(int i=0;i<n;i++){
    //     if(arr[i]>0){
    //         mi = min(mi,arr[i]);
    //         ma = max(ma,arr[i]);
    //     }
    // }
    // int ans = mi;
    // // for(int i=0;i<n;i++){
    // //     cout<<arr[i]<<" ";
    // // }
    // int idxs = 0,idxe = 0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]<0){
    //         idxs = i;
    //     }else{
    //         idxe = i;
    //         break;
    //     }
    // }
    
    // for(int i=idxs;i<=idxe;i++){
    //     if(binary_search(arr,arr+n,i)){
    //         continue;
    //     }else{
    //         ans = arr[i];
    //     }
    // }
    // return ans;
    
    
}

// { Driver Code Starts.

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0; i<n; i++)cin>>arr[i];
        
        cout<<findMissing(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends