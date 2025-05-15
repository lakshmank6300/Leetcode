class Solution {
public:
    int characterReplacement(string s, int k) {
        int mx=0,n=s.size(),j=0;
        vector<int>cnt(26,0);
        int mf=INT_MIN,i=0;
        for( i=0;i<n;i++){
            cnt[s[i]-'A']++;
            mf=max(cnt[s[i]-'A'],mf);
            while(((i-j+1)-mf)>k){
                cnt[s[j]-'A']--;
                mf=0;
                for(int i=0;i<26;i++)
                    mf=max(mf,cnt[i]);
                j++;
            }
            mx=max(i-j+1,mx);
        }
        // mx=max(i-j+1,mx);
        return mx;
    }
};