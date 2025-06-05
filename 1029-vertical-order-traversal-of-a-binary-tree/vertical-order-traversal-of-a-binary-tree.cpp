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
    bool compare(pair<int,int>a,pair<int,int>b){
        if(a.first==b.first){
            return a.second<b.second;
        }
        else{
            return a.first<b.first;
        }
    }
class Solution {
public:


    void inorder(map<int,vector<pair<int,int>>>&mpp,TreeNode* root,int i,int r){
        if(!root) return ;
        mpp[i].push_back({r,root->val});
        inorder(mpp,root->left,i-1,r+1);
        inorder(mpp,root->right,i+1,r+1);
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,vector<pair<int,int>>>mpp;
        inorder(mpp,root,0,0);
        // vector<vector<pair<int,int>>>res;
        vector<vector<int>>sol;
        for(auto i:mpp){
            vector<pair<int,int>>temp=i.second;
            sort(temp.begin(),temp.end(),compare);
            vector<int>tempor;
            for(auto j:temp){
                tempor.push_back(j.second);
            }
            sol.push_back(tempor);
        }
        return sol;
    }
};