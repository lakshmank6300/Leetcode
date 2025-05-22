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

struct Info{
    int h,d;
};
class Solution {
public:
    Info Diameter(TreeNode *root){
        if(root==NULL) return {0,0};
        Info Left = Diameter(root->left);
        Info Right = Diameter(root->right);

        Info Curr;
        Curr.h=max(Left.h,Right.h)+1;
        Curr.d=max(Left.d,max(Right.d,Left.h+Right.h));
        return Curr;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        Info res=Diameter(root);
        return res.d;
    }
};