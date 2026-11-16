class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = INT_MAX, res = 0;
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < mn) mn = prices[i];
            res = max(res, prices[i] - mn);
        }
        return res;
    }
};