class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,s=0,n=nums.size();
        int e=n-1;
        while(i<=e){
            if(nums[i]==0){
                swap(nums[i],nums[s++]);
            }
            else if(nums[i]==2){
                swap(nums[i],nums[e--]);
                continue;
            }
            i++;
        }
        return;
    }
};