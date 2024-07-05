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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode *temp=head,*prev,*cur,*nxt;
        int c=1;
        vector<int>cp;
        while(temp->next->next!=NULL){
            prev=temp;
            temp=temp->next;
            cur=temp;
            temp=temp->next;
            nxt=temp;
            c++;
            if((cur->val<prev->val && cur->val<nxt->val) || (cur->val>prev->val && cur->val>nxt->val))
                cp.push_back(c);
            temp=cur;
        }
        int n=cp.size(),mn=INT_MAX;
        if(cp.size()<=1)
            return {-1,-1};
        for(int i=0;i<n-1;i++){
            if(cp[i+1]-cp[i]<mn)
                mn=cp[i+1]-cp[i];
        }
        return {mn,cp[n-1]-cp[0]};
    }
};