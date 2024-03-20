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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *temp1=list1,*temp2;
        b=b-a+2;
        a-=1;
        while(a--){
            temp1=temp1->next;
        }
        temp2=temp1;
         while(b--){
            temp2=temp2->next;
            // cout<<temp->val<<endl;
        }
        temp1->next=list2;
        while(list2->next!=NULL)
            list2=list2->next;
        list2->next=temp2;
        // while(list1!=NULL){
        //     cout<<list1->val<<" ";
        //     list1=list1->next;
        // }
        return list1;
    }
};