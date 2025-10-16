class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        
        vector<int> vec(value+1,0);
        int ind = 0,n = nums.size();
        for(int i = 0 ;i < n; i++){
            if(nums[i]>0) vec[nums[i] % value]++;
            else vec[ (value - abs(nums[i] % value))%value]++;
        }
        int mn = INT_MAX;
        for(int i = 0; i < value; i++){
            if(mn > vec[i]){ mn = vec[i]; ind = i; }
        }
        int res = mn * value;
        for(int i = 0; i <= ind; i++){
            if(vec[i] > mn){
                res++;
            }
            else{
                break;
            }
        }
        return res;
    }
};