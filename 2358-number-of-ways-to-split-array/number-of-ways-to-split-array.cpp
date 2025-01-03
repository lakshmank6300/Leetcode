class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long right=0,cnt=0,left=0;
        for(int i=0;i<nums.size();i++)
            right+=nums[i];
        for(int i=0;i<nums.size()-1;i++){
            left+=nums[i];
            right-=nums[i];
            if(left>=right)
                cnt++;
        }
        return cnt;
        
        
    }
};