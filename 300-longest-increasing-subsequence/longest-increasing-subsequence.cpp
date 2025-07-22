class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1,1);
        for(int i = n-1; i >= 0; i--){
            for(int j = i+1; j < n; j++){
                if(nums[j] > nums[i])
                    dp[i] = max(dp[i],dp[j]+1);
            }
        }
        int res = 0;
        for(int i = 0; i < n; i++){
            res = max(res, dp[i]);
        }
        return res;
    }
};