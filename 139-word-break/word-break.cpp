class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        vector<int>dp(n+1,0);
        map<string,bool> mpp;
        for(int i = 0; i < wordDict.size(); i++){
            mpp[wordDict[i]] = true;
        }
        for(int i = 0;i < n;i++){
            for(int j = i; j >= 0; j--){
                string str = s.substr(j,i-j+1);
                // cout<<str<<" ";
                if(mpp[str] == true && (j == 0 || dp[j-1]==true)){
                    dp[i] = true;
                }
            }
        }

        return dp[n-1];
    }
};