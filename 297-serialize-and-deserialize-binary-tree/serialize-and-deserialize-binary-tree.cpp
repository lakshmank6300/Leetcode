/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    string custom_atoi(int num){
        string res="";
        if(num==0) return "0";
        int flag=0;
        if(num<0){ flag=1; num=-num;}
            // cout<<num<<" ";
        while(num!=0){
            res+=(num%10)+'0';
            num/=10;
        }
        if(flag){ res.append("-"); }
        reverse(res.begin(),res.end());
        return res;
    }
    queue<TreeNode*>que;
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root==NULL) return "";
        que.push(root);
        string st="";
        while(!que.empty()){
            TreeNode* top=que.front();
            que.pop();
            if(top==NULL){ st.append("N "); continue; }
            else{
                // cout<<top->val<<" ";
                st.append(custom_atoi(top->val)+" ");
            }
            que.push(top->left);
            que.push(top->right);
        }
        return st;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size()==0) return NULL;
        vector<string>vec;
        stringstream s(data);
        string word;
        while(s>>word){
            vec.push_back(word);
            // cout<<word<<" ";
        }
        // return NULL;
        int n=vec.size();
        TreeNode *nn=new TreeNode(stoi(vec[0]));
        int i=1,num;
        que.push(nn);
        TreeNode* root=nn;
        while(i<vec.size() && !que.empty()){
            TreeNode *top=que.front();
            que.pop();
            if(vec[i]!="N"){
                num=stoi(vec[i]);
                nn=new TreeNode(num);
                top->left=nn;
                que.push(nn);
            }
            i++;
            if(i>=n) break;
            if(vec[i]!="N"){
                num=stoi(vec[i]);
                nn=new TreeNode(num);
                top->right=nn;
                que.push(nn);
            }
            i++;
        }
        // return NULL;
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));