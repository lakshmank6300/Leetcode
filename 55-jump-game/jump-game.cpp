class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int>paths(n+1);
        paths[0] = true;
        int mx = nums[0];
        for(int i = 0; i < n; i++){
            if(i > mx){
                return false;
            }
            mx = max(mx, i+nums[i]);
        }
        return true;
    }
};