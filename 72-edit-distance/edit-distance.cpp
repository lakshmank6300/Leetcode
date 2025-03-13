class Solution {
public:
    int minDistance(string word1, string word2) {
        int n=word1.size(),m=word2.size();
        vector<vector<int>>vec(n+1,vector<int>(m+1));
        for(int i=0;i<m+1;i++) vec[0][i]=i;
        for(int i=0;i<n+1;i++) vec[i][0]=i;
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(word1[i-1]==word2[j-1]) vec[i][j]=vec[i-1][j-1];
                else vec[i][j]=min(vec[i-1][j],min(vec[i][j-1],vec[i-1][j-1]))+1;
            }
        }
        return vec[n][m];

    }
};