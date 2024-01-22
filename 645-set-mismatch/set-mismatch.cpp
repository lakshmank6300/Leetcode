class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
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