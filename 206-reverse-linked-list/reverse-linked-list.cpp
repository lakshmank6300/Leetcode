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
 #include<algorithm>
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* pres=head;
        ListNode* nxt;
        while(pres!=NULL){
            nxt=pres->next;
            pres->next=prev;
            prev=pres;
            pres=nxt;
        }
        head=prev;
        return head;
    }
};