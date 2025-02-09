class Solution {
public:
    int solve(vector<vector<int>>&dp,vector<int>&nums,int ind,int prev_ind,int n){
        if(ind==n)
            return 0;
        if(dp[ind][prev_ind+1]!=-1)
            return dp[ind][prev_ind+1];
        int take=0+solve(dp,nums,ind+1,prev_ind,n);
        if(prev_ind==-1 || ind-prev_ind>1){
            take=max(take,nums[ind]+solve(dp,nums,ind+1,ind,n));
        }
        return dp[ind][prev_ind+1]=take;

    }
    int rob(vector<int>& nums) {
        vector<vector<int>>dp(nums.size(),vector<int>(nums.size()+2,-1));
        
        int res=solve(dp,nums,0,-1,nums.size());
        // for(int i=0;i<dp.size();i++){
        //     for(int j=0;j<dp[i].size();j++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return res;
    }
};