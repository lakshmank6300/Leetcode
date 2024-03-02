class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size(),i,j=0;
        vector<int>A,res;
        for(i=0;i<n;i++){
            if(nums[i]<0){
                A.push_back(nums[i]*nums[i]);
            }
            else
                break;
        }
        int k=i;
        for(k;k<n;k++)
            nums[k]*=nums[k];
        reverse(A.begin(),A.end());
        while(i<n && j<A.size()){
            if(A[j]<nums[i]){
                res.push_back(A[j]);
                j++;
            }
            else{
                res.push_back(nums[i]);
                i++;
            }
        }
        while(j<A.size()){
            res.push_back(A[j++]);
        }
        while(i<n){
            res.push_back(nums[i++]);
        }
        return res;
    }
};