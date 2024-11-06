class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        vector<int>ref=nums;
        sort(ref.begin(),ref.end());
        int temp;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size()-1;j++)
            if(__builtin_popcount(nums[j])==__builtin_popcount(nums[j+1]) && nums[j]>nums[j+1]){
                 temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
        if(ref==nums)
            return 1;
        else
            return 0;
    }
};