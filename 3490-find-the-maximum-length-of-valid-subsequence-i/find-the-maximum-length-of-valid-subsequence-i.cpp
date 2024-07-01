class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int even=0,odd=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)
                even++; 
            else
                odd++;
        }
        int ans=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]%2!=nums[i+1]%2){
                ans++;
            }
        }
        return max(even,max(odd,ans));

    }
};