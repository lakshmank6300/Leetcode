class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int res=0,rem=0;
        if(numExchange > numBottles)
            return numBottles;
        while(numBottles>0){
            res+=numBottles;
            rem+=numBottles%numExchange;
            if(rem>=numExchange){
                rem%=numExchange;
                rem++;
                res++;
            }
            // cout<<res<<" ";
            numBottles/=numExchange;
        }
        cout<<rem;
        if(rem>=numExchange)
            res++;
    return res;
    }
};