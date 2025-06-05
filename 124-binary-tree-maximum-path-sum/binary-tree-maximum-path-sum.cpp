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

    int inorder(TreeNode * root,int &mx){
        if(!root) return 0;
        int left = inorder(root->left,mx);
        int right = inorder(root->right,mx);
        mx=max(left+right+root->val,mx);
        if(max(left,right)+root->val<0) return 0;
        return max(left,right)+root->val;
        // if(left+right+root->val<0) return 0;
        // mx=max(mx,max(left,max(right,left+right+root->val)));
        // return left+right+root->val;
    }
    int maxPathSum(TreeNode* root) {
        int mx=INT_MIN;
        int res = inorder(root,mx);
        return mx;
    }
};