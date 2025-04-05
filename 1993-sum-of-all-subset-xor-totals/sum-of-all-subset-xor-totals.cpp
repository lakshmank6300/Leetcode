class Solution {
public:
    void solve(vector<int>&nums,int &res,int ind,int sol){
        if(ind==nums.size()){ res+=sol; return; }
        solve(nums,res,ind+1,sol);
        solve(nums,res,ind+1,sol^nums[ind]);
    }
    int subsetXORSum(vector<int>& nums) {
        int res=0;
        solve(nums,res,0,0);
        return res;
        
    }
};