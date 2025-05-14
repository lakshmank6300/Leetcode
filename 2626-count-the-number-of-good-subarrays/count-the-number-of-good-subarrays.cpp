class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        long long res=0,cnt=0,n=nums.size();
        map<int,int>mpp;
        int j=0;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
            cnt+=(mpp[nums[i]]-1);
            while(j<n && cnt>=k){
                res+=n-i;
                cnt-=mpp[nums[j]]-1;
                mpp[nums[j]]--;
                j++;
            }
        }
        return res;
    }
};