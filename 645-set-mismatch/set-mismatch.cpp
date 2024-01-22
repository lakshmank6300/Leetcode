class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(mp[nums[i]]==2){
                res.push_back(nums[i]);
                break;
            }
        }
        int s=0;
        for(int i=0;i<n;i++)
            s+=nums[i];
        s-=res[0];
        res.push_back(n*(n+1)/2-s);
        return res;
    }
};