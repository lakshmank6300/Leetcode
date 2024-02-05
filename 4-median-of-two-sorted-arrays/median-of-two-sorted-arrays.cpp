class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int n1,n2;
       double ans;
       for(int i=0;i<nums2.size();i++)
            nums1.push_back(nums2[i]);
        sort(nums1.begin(),nums1.end());
        int n=nums1.size();
        if(n%2==1){
             ans=nums1[(n/2)];
        }
        else{
            n1=(n/2)-1;
            n2=(n/2);
            ans=(nums1[n1]+nums1[n2])/2.0;
        }
        return ans;
    }
};