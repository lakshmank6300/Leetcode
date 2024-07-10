class Solution {
public:
    int minOperations(vector<string>& logs) {
        int cnt=0;
        for(int i=0;i<logs.size();i++){
            int n=logs[i].size();
            if((logs[i][n-2]>='0' && logs[i][n-2]<='9') || (logs[i][n-2]>='a' && logs[i][n-2]<='z'))
                cnt++;
            else if(logs[i][n-2]=='.' && n==2)
                continue;
            else{
                if(cnt!=0)
                    cnt--;
            }
        }
        return cnt;
    }
};