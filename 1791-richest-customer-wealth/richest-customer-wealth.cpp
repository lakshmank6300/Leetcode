class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx,max_ele=0;
        for(int i=0;i<accounts.size();i++){
            mx=0;
            for(int j=0;j<accounts[i].size();j++){
                mx+=accounts[i][j];
            }
            max_ele=max(max_ele,mx);
        }
        return max_ele;
    }
};