class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int a = 0, b = 0,player = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]%2 == 1) player ^= 1;
            if((i+1)%6 == 0) player ^= 1;
            if(player == 0)  a += nums[i];
            else b += nums[i];
        }
        return a-b;
    }
};