class Solution {
public:
    int maxFrequency(vector<int>& nums, int k, int numOperations) {
        
        int high = *max_element(nums.begin(),nums.end());
        int low = *min_element(nums.begin(),nums.end());

        map<int,int> mpp;
        for(int i = 0; i< nums.size(); i++){
            mpp[nums[i]]++;
        }
        vector<int> vec(high + 2);
        for(int i = 0; i < nums.size(); i++){
            vec[max(low,nums[i]-k)] += 1;
            vec[min(high+1,nums[i]+k+1)] -= 1;
        }
        int mx = 0;
        for(int i = 1;i < high + 2; i++){
            vec[i] = vec[i-1] + vec[i];
            int calc = (vec[i] - mpp[i]);
            int oper = min(numOperations,calc);
            if(mx < mpp[i] + oper){
                mx = mpp[i] + oper;
            }
        }
        return mx;
    }
};