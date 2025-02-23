class Solution {
public:
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
        long long res=0;
        vector<int>ans;
        multimap<vector<int>,int>mpp;
        for(int i=0;i<grid.size();i++){
            sort(grid[i].rbegin(),grid[i].rend());
            mpp.insert({grid[i], limits[i]});

        }
        int i=0,j=0;
        for(auto i=mpp.rbegin();k && i!=mpp.rend();i++){
            int cnt=i->second;
            int j=0;
            while(j<((i->first).size()) && cnt--){
                ans.push_back((i->first)[j++]);
                // res+=(i->first)[j++];
                // k--;
                // cout<<j<<" ";
            }
        }
        sort(ans.rbegin(),ans.rend());
        for(int i=0;i<ans.size()&& k;i++,k--){
            res+=ans[i];
        }
        return res;
        // while(i<grid.size() && k){
        //     j=0;
        //     while(k && j<grid[i].size() && limits[i]>0){
        //         res+=grid[i][j];
        //         j++;
        //         k--;
        //         limits[i]--;
        //         cout<<res<<" ";
        //     }
        //     i++;
        // }
        // return res;
    }
// 8 6 2
// 7 5 3

//4 3
//2 1


};