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
    void reorderList(ListNode* head) {
        vector<int>arr;
        ListNode* temp=head;
        if(temp->next==NULL)
            return;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int n=arr.size()-1,i=0;
        temp=head;
        while(temp && temp->next){
            temp->val=arr[i++];
            temp=temp->next->next;
        }
        if(temp)
            temp->val=arr[i++];
        temp=head->next;
        while(temp && temp->next){
            temp->val=arr[n--];
            temp=temp->next->next;
        }
        if(temp)
            temp->val=arr[n--];
    }
};