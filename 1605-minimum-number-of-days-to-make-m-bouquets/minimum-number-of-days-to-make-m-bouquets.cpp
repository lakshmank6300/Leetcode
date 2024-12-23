class Solution {
public:
    bool check(vector<int>&bloomDay,int mid,int k,int m){
        int cnt=0,st=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]-mid<=0)
                cnt++;
            else
                cnt=0;
            if(cnt==k){
                st++;
                cnt=0;
            }
        }
        return st>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k>bloomDay.size())
            return -1;
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int low=1;
        while(low<=high){
            int mid=(low+high)/2;
            if(check(bloomDay,mid,k,m))
                high=mid-1;
            else
                low=mid+1;
        }
        return low;
    }
};