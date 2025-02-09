class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0,mn=INT_MAX,sm=0;
        while(i<nums.size()){
            sm+=nums[i];
            while(j<nums.size() && sm>=target){
                mn=min(i-j+1,mn);
                sm-=nums[j];
                j++;
            }
            i++;
        }
        if(mn==INT_MAX)
            return 0;
        return mn;
    }
};