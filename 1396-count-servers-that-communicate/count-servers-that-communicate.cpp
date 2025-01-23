class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        vector<int>row(grid.size(),0),col(grid[0].size(),0);
        int res=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                row[i]+=grid[i][j];
            }
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                col[j]+=grid[i][j];
            }
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1 && (row[i]>1 || col[j]>1))
                    res++;
            }
        }
        return res;
    }
};