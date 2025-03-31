class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        if(nums.size()<=1) return nums.size();
        int mx=1,cnt=1;
        for(int i=0;i<nums.size()-1;i++){
            if(abs(nums[i]-nums[i+1])==1) cnt++;
            else if(nums[i]==nums[i+1]) continue;
            else cnt=1;
            mx=max(cnt,mx);
        }
        return mx;
    }
};