class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int res = 0,prev = 0;
        while(numBottles > 0){
            res += numBottles;
            int rem = (numBottles + prev);
            prev = rem % numExchange;
            numBottles = (rem / numExchange);
        }
        return res;
    }
};