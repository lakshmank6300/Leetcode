/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head){
 int t;
 struct ListNode *temp=head;
 if(head==NULL){
     return head;
 }
 if(temp->next==NULL){
     return head;
 }
 temp=head;
 while(temp->next!=NULL){
     t=temp->val;
     temp->val=temp->next->val;
     temp->next->val=t;
     temp=temp->next->next;
     if(temp==NULL)
     break;
 }
 return head;
}
