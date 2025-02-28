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
    void inorder(TreeNode* root,map<int,vector<int>>&mpp,int ind){
        if(root==NULL)  return;
        inorder(root->left,mpp,ind+1);
        mpp[ind].push_back(root->val);
        inorder(root->right,mpp,ind+1);
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        map<int,vector<int>>mpp;
        vector<vector<int>>res;
        inorder(root,mpp,0);

        for(auto i=mpp.begin();i!=mpp.end();i++){
            vector<int>temp;
            for(int j=0;j<(i->second).size();j++){
                temp.push_back((i->second)[j]);
            }
            res.push_back(temp);
        }
        return res;
        
    }
};