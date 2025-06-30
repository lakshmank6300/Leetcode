class Solution {
public:

    void recursion( int i , vector<string>&matrix, int n, vector<vector<string>> &res){
        if(i >= n){ res.push_back(matrix); return;}
        for(int j = 0; j < n; j++ ){
            matrix[i][j] = 'Q';
            bool flag = true;
            for(int k = i-1; k>=0; k-- ){
                if(matrix[k][j] == 'Q')  flag = false;
            }
            int x = i-1 , y = j-1;
            while(x >= 0 && y >= 0){
                if(matrix[x][y]=='Q')
                    flag = false;
                x--,y--;
            }
            x = i-1 , y = j+1 ;
            while(x >= 0 && y < n){
                // cout<<x<<" "<<y<<endl;
                // cout<<i<<" "<<j<<endl;
                // cout<<endl<<endl;
                // cout<<matrix[x][y]<<" ";
                if(matrix[x][y] == 'Q') flag = false;
                x--,y++;
            }
            // cout<<j<<" ";
            if(flag == true) recursion(i+1,matrix,n,res);
            matrix[i][j]='.';
        }

    }

    vector<vector<string>> solveNQueens(int n) {

        vector<vector<string>>res;
        string str = "";
        for(int i = 0 ; i < n; i++) str += ".";
        vector<string> board(n,str);
        recursion(0,board,n,res);
        return res;
    }
};