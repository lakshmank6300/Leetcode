class Solution {
    
    private char[][] grid;
    private int n , m, count = 0;
    private boolean[][] visited;
    void dfs(int i , int j){
        if(i >= n || j >= m || i < 0 || j < 0 || visited[i][j]==true || grid[i][j] == '0' ) return;
        visited[i][j]=true;
        dfs(i+1,j);
        dfs(i,j+1);
        dfs(i-1,j);
        dfs(i,j-1);
    }

    public int numIslands(char[][] map) {
        grid = map;
        n = grid.length;
        m = grid[0].length;
        visited= new boolean[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j]=='1' && !visited[i][j]){
                    dfs(i,j);
                    count++;
                }
            }
        }
        return count;
    }
}