class Solution {
public:
    bool check(int mid,vector<int>&nums,int k){
        long long cnt=0,rem=0;
        for(int i=0;i<nums.size();i++){
            rem+=nums[i];
            if(rem==mid){
                cnt++;
                rem=0;
            }
            else if(rem>mid){
                cnt++;
                rem=nums[i];
            }
        }
        if(rem) cnt++;
        cout<<cnt<<" "<<mid<<endl;
        return cnt>k;
    }
    int splitArray(vector<int>& nums, int k) {
        long long sm=0,n=nums.size();
        for(int i=0;i<nums.size();i++)
            sm+=nums[i];
        long long low=*max_element(nums.begin(),nums.end()),high=sm;
        while(low<=high){
            long long mid=(low+high)/2;
            if(check(mid,nums,k)){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};