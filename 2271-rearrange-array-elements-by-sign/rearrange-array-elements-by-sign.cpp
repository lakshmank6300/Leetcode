class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>res1;
        vector<int>res2;
        vector<int>result;
        for(int i=0;i<n;i++){
            if(nums[i]>0)
                res1.push_back(nums[i]);
        }
        for(int i=0;i<n;i++){
            if(nums[i]<0)
                res2.push_back(nums[i]);
        }
        for(int i=0;i<n/2;i++){
            result.push_back(res1[i]);
            result.push_back(res2[i]);
        }
        return result;
    }
};