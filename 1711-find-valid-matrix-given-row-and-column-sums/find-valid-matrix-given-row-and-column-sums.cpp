class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        vector<vector<int>>mat;

        for(int i=0;i<rowSum.size()-1;i++){
            vector<int>vec;
            for(int j=0;j<colSum.size();j++){
                if(rowSum[i]<=colSum[j]){
                    vec.push_back(rowSum[i]);
                    colSum[j]-=rowSum[i];
                    rowSum[i]=0;
                }
                else{
                    vec.push_back(colSum[j]);
                    rowSum[i]-=colSum[j];
                    colSum[j]=0;
                }
            }
            mat.push_back(vec);
        }
        vector<int>vec;
        for(int i=0;i<colSum.size();i++){
            vec.push_back(colSum[i]);
        }
        mat.push_back(vec);
        return mat;
    }
};