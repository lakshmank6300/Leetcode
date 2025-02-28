class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1,-1);
        if(amount==0)   return 0;
        int n=coins.size();
        for(int i=0;i<coins.size();i++){
            if(coins[i]<=amount)
            dp[coins[i]]=1;
        }
        sort(coins.begin(),coins.end());
        for(int i=1;i<=amount;i++){
            int mn=INT_MAX;
            if(dp[i]==1)
                continue;
            for(int j=0;j<n;j++){
                if(i-coins[j]>=1 && dp[i-coins[j]]!=-1)
                    mn=min(mn,dp[i-coins[j]]+1);
            }
            if(mn!=INT_MAX)
                dp[i]=mn;
        }
        return dp[amount];
    }
};