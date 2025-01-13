class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        for(int i=s.size()-1;i>0;i--)
            shifts[i-1]=(shifts[i]+shifts[i-1])%26;
        for(int i=s.size()-1;i>=0;i--){
            int k=(s[i]-'a'+shifts[i])%26;
            s[i]=(char)('a'+k);
        }
        return s;
    }
};