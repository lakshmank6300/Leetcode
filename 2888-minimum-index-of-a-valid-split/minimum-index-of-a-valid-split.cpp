class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        map<int,int>mpp;
        double n=nums.size();
        int num,mx=0,cnt=0;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]]>mx){
                mx=mpp[nums[i]];
                num=nums[i];    
            }
        }
        if(mx<=ceil(n/2)) return -1;
        for(int i=0;i<n;i++){
            if(nums[i]==num){
                cnt++;
            }
            if(cnt>(i+1)/2)
                return i;
        }
        return -1;
    }
};