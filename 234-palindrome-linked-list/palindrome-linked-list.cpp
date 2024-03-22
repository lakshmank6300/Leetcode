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
        ListNode* slow=head;
        ListNode* fast=head;
        stack<int>lst;
        while(fast && fast->next){
            lst.push(slow->val);
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast!=NULL)
            slow=slow->next;
        while(!lst.empty()){
            if(slow->val!=lst.top())
                return false;
            slow=slow->next;
            lst.pop();
        }
        return true;
    }
};