// https://leetcode.com/problems/reverse-string/submissions/
class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(begin(s),end(s));
    }
};