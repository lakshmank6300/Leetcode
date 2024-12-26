class Solution {
public:
    bool check(vector<int>&arr, long long mid,int cars){
        long long cnt=0;
        for(int i=0;i<arr.size();i++){
            cnt+=sqrt(mid/arr[i]);
        }
        // cout<<cnt;
        return cnt<cars;
    }
    long long repairCars(vector<int>& ranks, int cars) {
        long long mx=*max_element(ranks.begin(),ranks.end());
        long long mn=*min_element(ranks.begin(),ranks.end());
        long long low=1;
        long long high=mx*cars*cars;
        while(low<=high){
            long long mid=(low+high)/2;
            if(check(ranks,mid,cars))
                low=mid+1;
            else
                high=mid-1;
        }
        return low;
    }
};