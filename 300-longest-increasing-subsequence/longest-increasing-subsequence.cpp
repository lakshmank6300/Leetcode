class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        res.push_back(nums[0]);
        for(int i = 1;i < n; i++){
            auto lb = lower_bound(res.begin(),res.end(),nums[i]);
            int ind = lb - res.begin();
            if(ind == res.size())
                res.push_back(nums[i]);
            else
                res[ind] = nums[i];
        }
        return res.size();
    }
};