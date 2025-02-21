class Solution {
public:
    int Count_Neighbours(vector<vector<int>>&board,int i,int j,int n,int m){
        int cnt=0;
        if(i-1>=0 && j-1>=0)   cnt+=board[i-1][j-1];
        if(i-1>=0)   cnt+=board[i-1][j];
        if(i-1>=0 && j+1<m)  cnt+=board[i-1][j+1];
        if(j+1<m)   cnt+=board[i][j+1];
        if(i+1<n && j+1<m)  cnt+=board[i+1][j+1];
        if(i+1<n)   cnt+=board[i+1][j];
        if(i+1<n && j-1>=0)  cnt+=board[i+1][j-1];
        if(i<n && j-1>=0)    cnt+=board[i][j-1];
        return cnt;
    }
    int Change(int n,int curr){
        if(curr==0){
            if(n==3)    return 1;
            return 0;
        }
        if(n==2 || n==3)    return 1;
        return 0;
    }
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size(),m=board[0].size();
        vector<vector<int>>res(n,vector<int>(m));
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                int neigh=Count_Neighbours(board,i,j,n,m);
                res[i][j]=Change(neigh,board[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                board[i][j]=res[i][j];
            }
        }
    }
};