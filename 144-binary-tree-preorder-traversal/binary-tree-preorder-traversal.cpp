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
    // Iterative Pre Order Traversal 
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        if(root == nullptr) return preorder;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode *curr = st.top();
            st.pop();
            preorder.push_back(curr->val);
            if(curr->right != nullptr) st.push(curr->right);
            if(curr->left != nullptr) st.push(curr->left); 
        }
        return preorder;
    }
};