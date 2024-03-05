class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        map<int,int>mp;
        for(int k=0;k<nums.size();k++){
            if(mp[nums[k]]==0)
            mp[nums[k]]=k+1;
            else{
                if(nums[k]*2==target)
                    return {mp[nums[k]]-1,k};
            }
        }
        for(int m=0;m<nums.size();m++)
            cout<<mp[nums[m]]<<" ";
        sort(nums.begin(),nums.end());
        while(i<j){
            if(nums[i]+nums[j]==target){
                return {mp[nums[i]]-1,mp[nums[j]]-1};
            }
            if(nums[i]+nums[j]>target){
                j--;
            }
            else{
                i++;
            }
        }
        return {i,78};
    }
};