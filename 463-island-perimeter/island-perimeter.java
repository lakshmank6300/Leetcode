class Solution {
    public int islandPerimeter(int[][] grid) {
        int n=grid.length,c=0;;
        for(int i=0;i<n;i++){
            for(int j=0;j<grid[i].length;j++){
                if(grid[i][j]==1){
                    c+=4;
                if(i>0 && grid[i-1][j]==1){
                    c-=2;
                }
                if(j<grid[i].length-1 && grid[i][j+1]==1){
                    c-=2;
                }
                }
            }
        }
        return c;
    }
}