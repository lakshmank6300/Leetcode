class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans="";
        int i=0;
        while(i<s.size()){
            if(s[i]==' '){
                k--;
            }
            if(k==0)
                break;
            ans+=s[i];
            i++;
        }
        return ans;
    }
};