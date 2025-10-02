class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int res = numBottles;
        while(numBottles >= numExchange){
            numBottles -= numExchange;
            numBottles++;
            numExchange += 1;
            res += 1;
        }
        return res;
    }
};