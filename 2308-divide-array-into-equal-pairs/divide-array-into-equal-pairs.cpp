class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int mx=0;

        map<int,int>mpp;
        for(auto i:nums)
            mx=max(i,mx);
        vector<bool>boo(mx+1,true);
        for(auto i:nums){
            boo[i]=!boo[i];
        }
        for(auto i:nums){
            if(boo[i]==false)
                return false;
        }
        return true;
    }
    
};