class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        for(int i=0;i<score.size();i++){
            for(int j=i+1;j<score.size();j++){
                if(score[i][k]<score[j][k]){
                    vector<int>temp=score[i];
                    score[i]=score[j];
                    score[j]=temp;
                }
            }
        }
        return score;
    }
};