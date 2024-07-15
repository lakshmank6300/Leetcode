/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        map<int,TreeNode*>mpp;
        TreeNode * head=NULL,*newNode,*child;
        for(int i=0;i<descriptions.size();i++){
            if(mpp[descriptions[i][0]]==0){
                newNode=new TreeNode(descriptions[i][0]);
                head=newNode;
                mpp[descriptions[i][0]]=newNode;
                }
            else
                newNode=mpp[descriptions[i][0]];
            if(mpp[descriptions[i][1]]==0){
                child= new TreeNode(descriptions[i][1]);
                mpp[descriptions[i][1]]=child;
                }
            else
                child=mpp[descriptions[i][1]];
            if(descriptions[i][2]==1){
                newNode->left=child;
            }
            else
                newNode->right=child;
        }
        map<int,int>childs;
        for(int i=0;i<descriptions.size();i++){
            childs[descriptions[i][0]]=1;
        }
        for(int i=0;i<descriptions.size();i++){
            childs[descriptions[i][1]]=0;
        }
        for(int i=0;i<descriptions.size();i++){
            if(childs[descriptions[i][0]]==1)
                return mpp[descriptions[i][0]];
        }
        return NULL;
    }
};