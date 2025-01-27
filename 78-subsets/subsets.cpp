class Solution {
public:
    void generate(vector<vector<int>>&res,vector<int>&nums,int i,int n,vector<int>temp){
        if(i==n){ 
            res.push_back(temp); 
            return;
        }
        generate(res,nums,i+1,n,temp);
        temp.push_back(nums[i]);
        generate(res,nums,i+1,n,temp);
        // temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>temp={};
        generate(res,nums,0,nums.size(),temp);
        return res;
    }
};