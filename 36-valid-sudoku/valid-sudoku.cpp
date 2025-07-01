class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int>valid(10,0);
        for(int i = 0 ;i < 9; i++){
            fill(valid.begin(),valid.end(),0);
            for(int j = 0; j < 9; j++){
                if(board[i][j]!='.'){
                    valid[board[i][j]-'0']++;
                    if(valid[board[i][j]-'0']>1)
                        return false;
                }
            }
        }

        for(int i = 0 ;i < 9; i++){
            fill(valid.begin(),valid.end(),0);
            for(int j = 0; j < 9; j++){

                if(board[j][i]!='.'){
                    valid[board[j][i]-'0']++;
                    if(valid[board[j][i]-'0']>1)
                        return false;
                }
            }
        }
        for(int i = 0; i < 9; i+=3){
            for(int j = 0; j < 9 ; j+=3){
                fill(valid.begin(),valid.end(),0);
                for(int k = 0; k < 3 ; k++){
                    for(int l = 0; l < 3; l++){
                        if(board[i+k][j+l]!='.'){
                            valid[board[i+k][j+l]-'0']++;
                            if(valid[board[i+k][j+l]-'0']>1)
                                return false;
                        }
                    }
                }
            }
        }
            return true;

    }
};