class Solution {
public:
    // bool check(vector<vector<int>>&mat,int i,int j){
    //     if(i>0 && mat[i-1][j]==1) return false;
    //     if(i<n-1 && mat[i+1][j]==1) return false;
    //     if(j>0 && mat[i][j-1]==1) return false;
    //     if(j<n-1 && mat[i][j+1]==1) return false;
    // }
    void solve(vector<vector<char>>&grid,vector<vector<int>>&dp,int i,int j,int n,int m){
        if(i<0 || j<0 || i==n || j==m || grid[i][j]=='0' || dp[i][j]==1 ) return;
        dp[i][j]=1;
        solve(grid,dp,i-1,j,n,m);
        solve(grid,dp,i,j+1,n,m);
        solve(grid,dp,i+1,j,n,m);
        solve(grid,dp,i,j-1,n,m);
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        int cnt=0;
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && dp[i][j]==0){
                    cnt++;
                    solve(grid,dp,i,j,n,m);
                }
            }
        }
        return cnt;
    }
    // int numIslands(vector<vector<char>>& grid) {
    //     int n=grid.size(),m=grid[0].size(),cnt=0;
    //     vector<vector<int>>dp(n,vector<int>(m,0));
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<m;j++){
    //             if(grid[i][j]=='1'){
    //                 if(dp[i][j]==0){
    //                     cnt++;
    //                     cout<<i<<" "<<j<<endl;
    //                 }
    //                 if(i<n-1) dp[i+1][j]=1;
    //                 if(j<m-1) dp[i][j+1]=1;
    //                 dp[i][j]=1;
    //             }
    //         }
    //     }
    //     return cnt;
    // }
};