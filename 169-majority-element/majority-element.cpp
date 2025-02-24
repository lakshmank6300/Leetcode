class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(),c=0,r=nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]==r){
                c++;
            }
            else{
                c--;
                if(c<0){
                    r=nums[i];
                    c=1;
                }
            }
        }
        return r;
    }
};