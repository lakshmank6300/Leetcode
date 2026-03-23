class Solution {
public:
    bool check(vector<vector<char>>& board,string& word,int i,int j,int p,vector<vector<bool>>&visited){
        if(p == word.size()) return true;
        if(i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || p >= word.size() || board[i][j] != word[p] || visited[i][j]) return false;
        visited[i][j] = true;
        bool a = check(board,word,i+1,j,p+1,visited);
        bool b = check(board,word,i,j+1,p+1,visited);
        bool c = check(board,word,i-1,j,p+1,visited);
        bool d = check(board,word,i,j-1,p+1,visited);
        visited[i][j] = false;
        return a || b || c || d;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size(), m = board[0].size();
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(board[i][j] == word[0])
                    if(check(board,word,i,j,0,visited)) return true;
            }
        }
        return false;
    }
};