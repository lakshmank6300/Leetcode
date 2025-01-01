class Solution {
public:
    int maxScore(string s) {
        int left=0,right=0,mx=0;
        for(int i=0;i<s.size();i++) if(s[i]=='1') right++;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='0') left++;
            else right--;
            mx=max(mx,left+right);
        }
        return mx;
    }
};