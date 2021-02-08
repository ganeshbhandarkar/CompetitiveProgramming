//I Love You MOTI
// https://www.geeksforgeeks.org/find-a-triplet-that-sum-to-a-given-value/
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
    int n,s;cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]==s){
                    cout<<"true";
                }
            }
        }
    }
    cout<<"false";
    // for(int i=0;i<n;i++){
    //   cout<<a[i]<<" ";
    // }
}

// // C++ program to find a triplet using Hashing
// #include <bits/stdc++.h>
// using namespace std;

// // returns true if there is triplet with sum equal
// // to 'sum' present in A[]. Also, prints the triplet
// bool find3Numbers(int A[], int arr_size, int sum)
// {
//     // Fix the first element as A[i]
//     for (int i = 0; i < arr_size - 2; i++) 
//     {

//         // Find pair in subarray A[i+1..n-1]
//         // with sum equal to sum - A[i]
//         unordered_set<int> s;
//         int curr_sum = sum - A[i];
//         for (int j = i + 1; j < arr_size; j++) 
//         {
//             if (s.find(curr_sum - A[j]) != s.end()) 
//             {
//                 printf("Triplet is %d, %d, %d", A[i],
//                        A[j], curr_sum - A[j]);
//                 return true;
//             }
//             s.insert(A[j]);
//         }
//     }

//     // If we reach here, then no triplet was found
//     return false;
// }

// /* Driver program to test above function */
// int main()
// {
//     int A[] = { 1, 4, 45, 6, 10, 8 };
//     int sum = 22;
//     int arr_size = sizeof(A) / sizeof(A[0]);

//     find3Numbers(A, arr_size, sum);

//     return 0;
// }