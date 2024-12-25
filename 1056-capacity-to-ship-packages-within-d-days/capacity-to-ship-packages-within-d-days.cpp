class Solution {
public:
    bool check(vector<int>&arr,long long mid,int days){
        double w=0,cnt=0;
        for(int i=0;i<arr.size();i++){
            w+=arr[i];
            if(w==mid){
                cnt+=1;
                w=0;
            }
            else if(w>mid){
                cnt+=1;
                w=arr[i];
            }
        }
        if(w)
            cnt+=1;
        return cnt>days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        long long sm=0,mx=0;
        for(int i=0;i<weights.size();i++){
            sm+=weights[i];
            if(weights[i]>mx)
                mx=weights[i];
        }
        long long low=mx,high=sm;
        while(low<=high){
            long long mid=(low+high)/2;
            if(check(weights,mid,days))
                low=mid+1;
            else
                high=mid-1;
        }
        return low;
    }
};