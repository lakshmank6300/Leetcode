class Solution {
public:
    bool predicate(int mid , vector<int>&piles,int h){
        long long res=0;
        for(int i=0;i<piles.size();i++){
            res+=piles[i]/mid;
            if(piles[i]%mid!=0)    res++;
        }
        return res<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long low=1,high=accumulate(piles.begin(),piles.end(),0LL);
        while(low<=high){
            long long mid=(low+high)>>1;
            if(predicate(mid,piles,h)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};