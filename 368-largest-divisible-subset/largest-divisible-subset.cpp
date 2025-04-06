class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        // return {};
        sort(nums.begin(),nums.end());
        int n=nums.size(),mx=0,tar;
        vector<int>res;
        vector<int>dp(n+1,1);
        vector<int>hash(n+1);
        for(int i=0;i<n;i++){
            hash[i]=i;
            for(int j=i-1;j>=0;j--){
                if((nums[i]%nums[j]==0 || nums[j]%nums[i]==0) && dp[j]>=dp[i]){
                    hash[i]=j;
                    dp[i]=dp[j]+1;
                }
            }
            if(dp[i]>mx){ mx=dp[i]; tar=i; }
        }
        cout<<mx;
        while(tar!=hash[tar]){
            res.push_back(nums[tar]);
            tar=hash[tar];
        }
        res.push_back(nums[tar]);
        return res;
    }
};