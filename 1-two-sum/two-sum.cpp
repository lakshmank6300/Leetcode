class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,pair<int,int>>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]].first=i;
            mpp[nums[i]].second++;
        }
        for(int i=0;i<nums.size();i++){
            if(target-nums[i]==nums[i]){
                if(mpp[nums[i]].second>1)
                    return {i,(mpp[nums[i]].first)};
            }
            else{
            if(mpp[target-nums[i]].second>0)
                return {i,mpp[target-nums[i]].first};
            }
            
        }
        return {-1};
    }
};