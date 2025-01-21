class Solution {
public:
    void balance(multiset<int>&low,multiset<int>&high){
        if(low.size()>high.size()+1){
            high.insert(*low.rbegin());
            low.erase(--(low.end()));
        }
        if(low.size()<high.size()){
            low.insert(*high.begin());
            high.erase(high.begin());
        }
    }
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        vector<double>res;
        multiset<int>low,high;
        for(int i=0;i<nums.size();i++){

            //insertion
            if(low.empty() || nums[i]<=*low.rbegin()) low.insert(nums[i]);
            else high.insert(nums[i]);
            balance(low,high);

            //deletion;
            if(i>=k){
                if(nums[i-k]<=*low.rbegin())
                    low.erase(low.find(nums[i-k]));
                else
                    high.erase(high.find(nums[i-k]));
                balance(low,high);
            }
            if(i>=k-1){
                if(k%2==1) res.push_back((double)*low.rbegin());
                else res.push_back(((double)*low.rbegin()+(double)*high.begin())/2.0);
            }
        }
        return res;
    }
};