class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int n=grid.size(),m=grid[0].size();
        vector<int>vec;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                vec.push_back(grid[i][j]);
            }
        }
        sort(vec.begin(),vec.end());
        int mod=grid[0][0]%x,oper=0;
        for(int i=0;i<vec.size();i++)
            if(vec[i]%x!=mod) return -1;
        int median=vec[(n*m)/2];
        for(int i=0;i<vec.size();i++)
            oper+=abs(median-vec[i])/x;
        return oper;
    }
};