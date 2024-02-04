class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int mx=0,cnt;
        for(int i=0;i<sentences.size();i++){
            cnt=1;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]==' ')
                    cnt++;
            }
            if(cnt>mx)
                mx=cnt;
        }
        return mx;
    }
};