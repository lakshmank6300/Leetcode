class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0, j = nums.size() -1;
        int curr = 0;
        while(curr <= j){
            if(nums[curr] == 0) swap(nums[curr++],nums[i++]);
            else if(nums[curr] == 1) curr++;
            else swap(nums[curr],nums[j--]);
        }
    }
};