class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>res;
        vector<int>arr(nums.size()+1,0);
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;
            if(arr[nums[i]]>1)
                res.push_back(nums[i]);
        }
        return res;

    }
};