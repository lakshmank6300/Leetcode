class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n=s.size();
        vector<int>pref(n+1,0);
        for(int i=0;i<shifts.size();i++){
            pref[shifts[i][0]]+=(shifts[i][2]==1)?1:-1;
            pref[shifts[i][1]+1]+=(shifts[i][2]==1)?-1:1;
        }
        for(int i=1;i<n;i++)
            pref[i]=pref[i]+pref[i-1];
        for(int i=0;i<n;i++){
            int r=(s[i]-'a'+pref[i])%26;
            s[i]=(r<0)?26+r+'a':'a'+r;
        }
        return s;
    }
};