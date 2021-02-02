/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        if(strs[0].size()==0) return "";
        if(strs.size()==1) return strs[0];
        string ch = strs[0];
        string ans = "";
        int n = strs.size();
        int cnt = INT_MAX;
        for(int i=1;i<strs.size();i++){
            int cur = 0;
            for(int j = 0;j<strs[i].length();j++){
                if(ch[j]==strs[i][j]){
                    cur++;
                }else{
                    break;
                }
            }
            cnt = min(cnt,cur);
        }   
        for(int i=0;i<cnt;i++){
            ans += ch[i];
        }
        // sort(begin(strs),end(strs));
        // string a = strs[0];
        // string b = strs[n-1];
        // string ans = "";
        // for(int i=0;i<a.size();i++){
        //     if(a[i]==b[i]){
        //         ans += a[i];
        //     }else{
        //         break;
        //     }
        // }
        return ans;
    }
};
// @lc code=end

