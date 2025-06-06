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
    vector<vector<int>> BFS(TreeNode* root){
        if(root==NULL) return{};
        vector<vector<int>>bfs;
        queue<TreeNode*>que;
        que.push(root);
        while(!que.empty()){
            vector<int>temp;
            int n=que.size();
            for(int i=0;i<n;i++){
                TreeNode* top=que.front();
                que.pop();
                if(top->left!=NULL) que.push(top->left);
                if(top->right!=NULL) que.push(top->right);
                temp.push_back(top->val);
            }
            bfs.push_back(temp);
        }
        return bfs;
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>bfs = BFS(root);
        for(int i=1;i<bfs.size();i+=2){
            reverse(bfs[i].begin(),bfs[i].end());
        }
        return bfs;
    }
};