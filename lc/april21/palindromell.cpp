/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode* node = head;
        while(node != NULL){
            st.push(node->val);
            node = node->next;
        }
        node = head;
        while(!st.empty()){
           // cout<<st.top()<<endl;
            if(st.top() != node->val){
                //cout<<node->val;
                return false;
            }else{
                node = node->next;
                st.pop();
            }
        }
        return true;
    }
};