class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long c=0,s=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                c++;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
                s*=nums[i];
        }
        if(c>0){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0 && c==1)
                    nums[i]=s;
                else
                    nums[i]=0;
            }
            return nums;
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=s/nums[i];
        }
        return nums;
    }
};