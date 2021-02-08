// https://leetcode.com/problems/find-the-duplicate-number/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> m;
        for(auto i : nums){
            m[i]++;
        }
        int ans = 0;
        for(auto i : m){
            if(i.second > 1){
                ans = i.first;
                break;
            }
        }
        return ans;
    }
};