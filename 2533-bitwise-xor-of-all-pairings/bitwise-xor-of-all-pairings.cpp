class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int res=0;
        if(nums1.size()%2==0 && nums2.size()%2==0)
            return 0;
        else if(nums1.size()%2==1 && nums2.size()%2==1){
            for(int i=0;i<nums1.size();i++)
                res^=nums1[i];
            for(int i=0;i<nums2.size();i++)
                res^=nums2[i];
        }
        else{
            if(nums2.size()%2==0)
                for(int i=0;i<nums2.size();i++)
                    res^=nums2[i];
            else
                for(int i=0;i<nums1.size();i++)
                    res^=nums1[i];
        }
        return res;
    }
};