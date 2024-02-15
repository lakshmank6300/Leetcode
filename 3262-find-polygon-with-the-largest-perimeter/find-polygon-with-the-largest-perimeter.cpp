class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long n=nums.size(),i;
        vector<long long>pref(n);
        pref[0]=nums[0];
        for( i=1;i<n;i++)
            pref[i]=pref[i-1]+nums[i];
        for( i=n-1;i>0;i--){
            if(nums[i]<pref[i-1])
                return pref[i];
        }
        return -1;
    }
};