class Solution {
public:
    void Solve(vector<vector<int>>&result,vector<int> arr,int start,int end){
        if(start==end){
            result.push_back(arr);
            return;
        }
        for(int i=start;i<=end;i++){
            swap(arr[start],arr[i]);
            Solve(result,arr,start+1,end);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>result;
        Solve(result,nums,0,nums.size()-1);
        return result;
    }
};