/*
 * @lc app=leetcode id=949 lang=cpp
 *
 * [949] Largest Time for Given Digits
 */

// @lc code=start
class Solution {
public:
    string largestTimeFromDigits(vector<int>& arr) {
        string ans = "";
        sort(arr.begin(),arr.end(),greater<>());
        do{
            if(arr[2]>5) continue;
            if((arr[0]==2 and arr[1]<=3) || arr[0]==1 || arr[0]==0){
                return (to_string(arr[0])+to_string(arr[1])+":"+to_string(arr[2])+to_string(arr[3]));
            }
        }while(prev_permutation(arr.begin(),arr.end()));
        // queue<int> q;
        // for(int i=0;i<arr.size();i++){
        //     q.push(arr[i]);
        // }
        // for(int i=0;i<arr.size();i++){
        //     for(int j=0;j<arr.size();j++){
        //         if(j<=2 and j>=0){

        //         }
        //     }
        // }
       
        return ans;
    }
};
// @lc code=end

