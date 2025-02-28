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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>queu;
        vector<vector<int>>res;
        if(root==NULL)  return {};
        queu.push(root);
        while(queu.size()!=0){
            vector<int>temp;
            int n=queu.size();
            for(int i=0;i<n;i++){
                if((queu.front()->left)!=NULL)  queu.push(queu.front()->left);
                if((queu.front()->right)!=NULL) queu.push(queu.front()->right);
                temp.push_back((queu.front())->val);
                queu.pop();
            }
            res.push_back(temp);
        }
        return res;
    }
};