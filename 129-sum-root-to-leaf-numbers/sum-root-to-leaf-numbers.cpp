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
 #define ll long long
class Solution {
public:
    void inorder(ll &res,TreeNode* root,ll sm){
        if(root==NULL) return;
        cout<<(res)<<" ";
        sm=sm*10+(root->val);
        if((root->left)==NULL && (root->right)==NULL){
            // sm=sm*10+(root->val);
            res+=sm;
            return;
        }
        // if(root==NULL){ res+=sm; return;}
        inorder(res,root->left,sm);
        inorder(res,root->right,sm);
        
    }
    int sumNumbers(TreeNode* root) {
        ll res = 0;
        inorder(res,root,0);
        return res;
    }
};