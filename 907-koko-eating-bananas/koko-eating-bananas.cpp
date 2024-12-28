class Solution {
public:
    bool check(long long mid,vector<int>& piles,int h){
        long long sm=0;
        for(int i=0;i<piles.size();i++){
            double pil=piles[i];
            sm+=ceil(pil/mid);
        }
        return sm>h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long sm=0;
        for(int i=0;i<piles.size();i++)
            sm+=piles[i];
        long long low=1,high=sm;
        while(low<=high){
            long long mid=(low+high)/2;
            if(check(mid,piles,h))
                low=mid+1;
            else
                high=mid-1;
        }
        return low;
    }
};