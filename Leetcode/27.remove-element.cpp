/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
               nums[cnt++] = nums[i];
            }
        }
        return cnt;
    }
};
// @lc code=end

