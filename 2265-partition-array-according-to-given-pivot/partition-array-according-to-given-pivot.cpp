class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>res1;
        vector<int>res2;
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot)
                res1.push_back(nums[i]);
            else if(nums[i]==pivot)
                k++;
            else
                res2.push_back(nums[i]);
        }
        for(int i=0;i<k;i++){
            res1.push_back(pivot);
        }
        vector<int>result(res2.size()+res1.size());
    merge(res1.begin(),res1.end(),res2.begin(),res2.end(),result.begin());
    return result;
    }
};