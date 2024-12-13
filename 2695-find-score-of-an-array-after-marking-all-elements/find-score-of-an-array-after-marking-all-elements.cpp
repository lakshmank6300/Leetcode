class Solution {
public:
    long long findScore(vector<int>& nums) {
        vector<vector<int>>arr;
        long long score=0;
        vector<bool>marked(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end());
        // for(int i=0;i<nums.size();i++){
        //     cout<<arr[i][0]<<" "<<arr[i][1]<<endl;
        // }
        for(int i=0;i<arr.size();i++){
            if(marked[arr[i][1]]==false){
                marked[arr[i][1]]=true;
                if(arr[i][1]>0)
                marked[arr[i][1]-1]=true;
                if(arr[i][1]<arr.size()-1)
                marked[arr[i][1]+1]=true;
                score+=arr[i][0];
            }
        }
        return score;
    }
};