class Solution {
public:
    void solve(vector<vector<int>>&grid,vector<vector<int>>&dp,int i,int j,int n,int m,int &cnt){
        if(i<0 || j<0 || i==n || j==m || grid[i][j]==0 || dp[i][j]==1 ){ return;}
        dp[i][j]=1;
        cnt++;
        solve(grid,dp,i-1,j,n,m,cnt);
        solve(grid,dp,i,j+1,n,m,cnt);
        solve(grid,dp,i+1,j,n,m,cnt);
        solve(grid,dp,i,j-1,n,m,cnt);
        // if(i==4 and j==10) cout<<cnt;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size(),mx=0;
        vector<vector<int>>dp(n,vector<int>(m,0));
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int cnt=0;
                if(grid[i][j]==1 && dp[i][j]==0){
                    solve(grid,dp,i,j,n,m,cnt);
                }    
                mx=max(cnt,mx);
            }
        }
        
        return mx;
    }
};