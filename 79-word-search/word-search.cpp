class Solution {
public:
    bool solve(vector<vector<int>>&visited,vector<vector<char>>&board,string &word,int cnt,int n,int m,int i,int j){
        if(cnt==word.size())
            return true;
        if(i>=n || j>=m || i<0 || j<0 || visited[i][j]==1)
            return false;
        if(visited[i][j]==0 && board[i][j]==word[cnt]){
            visited[i][j]=1;
            int a=solve(visited,board,word,cnt+1,n,m,i,j-1);
            int b=solve(visited,board,word,cnt+1,n,m,i,j+1);
            int c=solve(visited,board,word,cnt+1,n,m,i+1,j);
            int d= solve(visited,board,word,cnt+1,n,m,i-1,j);
            visited[i][j]=0;
            return a|| b || c || d;
        }
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size(),m=board[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    if(solve(visited,board,word,cnt,n,m,i,j))
                        return true;
                }
            }
        }
        return false;
    }
};