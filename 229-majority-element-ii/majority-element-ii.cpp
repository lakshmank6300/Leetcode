class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int k=n/3,c=1;
        vector<int>arr;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                c++;
            }
            else{
                if(c>k)
                    arr.push_back(nums[i]);
                c=1;
            }
        }
        if(c>k)
            arr.push_back(nums[n-1]);
        return arr;
    }
};