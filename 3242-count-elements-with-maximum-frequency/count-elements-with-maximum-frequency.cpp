class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        int mx=0,c=0;
        for(int i=0;i<nums.size();i++){  mp[nums[i]]++; mx=max(mx,mp[nums[i]]); }
        for(int i=0;i<nums.size();i++){  if(mp[nums[i]]==mx)    c++; }
        return c;
    }
};