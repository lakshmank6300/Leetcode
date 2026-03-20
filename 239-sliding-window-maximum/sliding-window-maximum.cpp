class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int,greater<int>> ms;
        vector<int> result;
        int j = 0;
        for(int i = 0; i < nums.size() ;i++){
            ms.insert(nums[i]);
            if(ms.size() == k){
                result.push_back(*(ms.begin()));
                auto it = ms.find(nums[j]);
                ms.erase(it);
                j++;
            }
        }
        return result;
    }
};