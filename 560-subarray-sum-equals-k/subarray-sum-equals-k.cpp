class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int pf=0,res=0;
        map<int,int>mpp;
        mpp[0]=1;
        for(int i=0;i<nums.size();i++){
            pf+=nums[i];
            if(mpp[pf-k]>0)
                res+=mpp[pf-k];
            mpp[pf]++;
        }
        return res;
    }
};