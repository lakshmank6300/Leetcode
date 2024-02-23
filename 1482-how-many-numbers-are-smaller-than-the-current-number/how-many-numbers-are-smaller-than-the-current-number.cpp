class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int c=0;
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            c=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]<nums[i])
                    c++;
            }
            res.push_back(c);
        }
        return res;
    }
};