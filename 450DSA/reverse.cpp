//I Love You MOTI
// https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/
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
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //reverse(a,a+n);
    for(int i=0,j=n-1;i<j;i++,j--){
        a[i]^=a[j];
        a[j]^=a[i];
        a[i]^=a[j];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}


// // Iterative C++ program to reverse an array
// #include <bits/stdc++.h>
// using namespace std;
 
// /* Function to reverse arr[] from start to end*/
// void rvereseArray(int arr[], int start, int end)
// {
//     while (start < end)
//     {
//         int temp = arr[start]; 
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     } 
// }     
 
// /* Utility function to print an array */
// void printArray(int arr[], int size)
// {
//    for (int i = 0; i < size; i++)
//    cout << arr[i] << " ";
 
//    cout << endl;
// } 
 
// /* Driver function to test above functions */
// int main() 
// {
//     int arr[] = {1, 2, 3, 4, 5, 6};
     
//     int n = sizeof(arr) / sizeof(arr[0]); 
 
//     // To print original array 
//     printArray(arr, n);
     
//     // Function calling
//     rvereseArray(arr, 0, n-1);
     
//     cout << "Reversed array is" << endl;
     
//     // To print the Reversed array
//     printArray(arr, n);
     
//     return 0;
// }


// // Recursive C++ program to reverse an array
// #include <bits/stdc++.h>
// using namespace std;
 
// /* Function to reverse arr[] from start to end*/
// void rvereseArray(int arr[], int start, int end)
// {
//     if (start >= end)
//     return;
     
//     int temp = arr[start]; 
//     arr[start] = arr[end];
//     arr[end] = temp;
     
//     // Recursive Function calling
//     rvereseArray(arr, start + 1, end - 1); 
// }     
 
 
// /* Utility function to print an array */
// void printArray(int arr[], int size)
// {
//    for (int i = 0; i < size; i++)
//    cout << arr[i] << " ";
 
//    cout << endl;
// } 
 
// /* Driver function to test above functions */
// int main() 
// {
//     int arr[] = {1, 2, 3, 4, 5, 6};
     
//     // To print original array
//     printArray(arr, 6);
     
//     // Function calling
//     rvereseArray(arr, 0, 5);
     
//     cout << "Reversed array is" << endl;
     
//     // To print the Reversed array
//     printArray(arr, 6);
     
//     return 0;
// }
