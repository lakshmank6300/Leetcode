class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int end = m + n - 1 , left = m - 1,right = n - 1;
        while(right >= 0 && left >= 0){
            if(nums1[left] <= nums2[right]) 
                nums1[end--] = nums2[right--];
            else
                nums1[end--] = nums1[left--];
        }
        while(right >= 0){
            nums1[end--] = nums2[right--];
        }
    }
};