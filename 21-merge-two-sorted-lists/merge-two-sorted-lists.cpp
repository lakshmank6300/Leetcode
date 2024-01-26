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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *tail=NULL;
        ListNode *res=NULL;
        int k;
        while(list1!=NULL && list2!=NULL){
            ListNode *node=new ListNode();
            if(list1->val<=list2->val){
                k=list1->val;
                list1=list1->next;
            }
            else {
                k=list2->val;
                list2=list2->next;
            }
            node->val=k;
            node->next=NULL;
            if(res==NULL)
                res=node;
            else
                tail->next=node;
            tail=node;
        }
        while(list1!=NULL){
            ListNode *node = new ListNode();
            node->val=list1->val;
            node->next=NULL;
            if(res==NULL)
                res=node;
            else
                tail->next=node;
            tail=node;
            list1=list1->next;
        }
        while(list2!=NULL){
            ListNode *node = new ListNode();
            node->val=list2->val;
            node->next=NULL;
            if(res==NULL)
                res=node;
            else
                tail->next=node;
            tail=node;
            list2=list2->next;
        }
        
        return res;
    }
};