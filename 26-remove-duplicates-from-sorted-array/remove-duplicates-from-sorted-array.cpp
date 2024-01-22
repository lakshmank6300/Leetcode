class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=0,k=0;
        while(i<nums.size() && j<nums.size()){
            nums[k++]=nums[i];
            while(nums[i]==nums[j]){
                j++;
                if(j>=nums.size())
                break;
            }
            while(i<j){
                i++;
            }
        }
        return k;
    }
};