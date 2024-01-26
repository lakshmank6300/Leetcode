class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        while(i<nums.size()){
            if(nums[i]!=0){
                int k=nums[i];
                nums[i]=0;
                nums[j]=k;
                j++;
            }
        i++;
        }
    }
};