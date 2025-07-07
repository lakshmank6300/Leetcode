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
    int maxPath(TreeNode* root , int &res){
        if(!root) return -1000;
        int left = maxPath(root->left, res);
        int right = maxPath(root->right, res);
        if(left < 0) left = 0; 
        if(right < 0) right = 0;
        res = max(res, left+right+root->val);
        return max(left,right) + root->val;

    }
    int maxPathSum(TreeNode* root) {
        int res = INT_MIN;
        maxPath(root,res);
        return res;

    }
};