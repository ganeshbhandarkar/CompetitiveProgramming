/*
 * @lc app=leetcode id=239 lang=cpp
 *
 * [239] Sliding Window Maximum
 */

// @lc code=start
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        for(int i=0;i<nums.size()-k;i++){
            int cur = INT_MIN;
            for(int j=i;j<k;j++){
                cur = max(cur,nums[j]);
            }
            ans.push_back(cur);
        }
        return ans;
    }
};
// @lc code=end

