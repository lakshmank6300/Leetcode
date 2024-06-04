class Solution {
public:
    int longestPalindrome(string s) {
        int ans=0,f=0;
        map<int,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            if(mp[s[i]]==2){
                mp[s[i]]=0;
                ans+=2;
            }
        }
        for(auto i=mp.begin();i!=mp.end();i++){
            if(i->second==1)
                f=1;
        }
        return ans+f;
    }
};