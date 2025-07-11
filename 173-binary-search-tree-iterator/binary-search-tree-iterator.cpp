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
class BSTIterator {
private:
    vector<int>inord;
    int i=0;
    void Inorder(TreeNode* root){
        if(!root) return;
        Inorder(root->left);
        inord.push_back(root->val);
        Inorder(root->right);
    }
public:
    BSTIterator(TreeNode* root) {
        Inorder(root);
    }
    
    int next() {
        return inord[i++];
    }
    
    bool hasNext() {
        if(i<inord.size()) return true;
        return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */