class Solution {
public:
    bool solve(int i,string &s,map<string,bool>&mpp,int n,vector<int>&dp){
        if(dp[i]!=-1)
            return dp[i];
        bool ans=false;
        if(i>=n) return true;
        for(auto [word,tr]: mpp){
            if(word[0]==s[i]){
                int m=word.size();
                if(i+m<=n){
                    string str=s.substr(i,m);
                    if(str==word){
                        ans|=solve(i+m,s,mpp,n,dp);
                    }
                }
            }
        }
        return dp[i]=ans;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        map<string,bool>mpp;
        vector<int>dp(s.size()+1,-1);
        for(int i=0;i<wordDict.size();i++) mpp[wordDict[i]]=true;
        return solve(0,s,mpp,s.size(),dp);
    }
};