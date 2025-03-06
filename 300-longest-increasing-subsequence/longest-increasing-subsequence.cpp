class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(nums.size()+1,-1);
        for(int i=0;i<n;i++){
            int mx=-1;
            for(int j=i;j>=0;j--){
                if(nums[i]>nums[j])
                    mx=max(dp[j],mx); 
            }
            if(mx!=-1)
                dp[i]=mx+1;
            else dp[i]=0;
        }
        int maxi=0;
        for(int i=0;i<n;i++){
            cout<<dp[i]<<" ";
            maxi=max(maxi,dp[i]);
        }
        return maxi+1;
    }
};