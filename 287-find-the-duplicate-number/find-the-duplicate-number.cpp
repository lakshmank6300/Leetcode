class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>cnt(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            cnt[nums[i]]++;
            if(cnt[nums[i]]==2)
                return nums[i];
        }
        return -1;
    }
};