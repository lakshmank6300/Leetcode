class Solution {
public:
    bool isPalindrome(string s) {
        string pal;
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z')
                pal+=s[i]+32;
            else if(s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i]<='9' )
                pal+=s[i];
        }
        int i=0,j=pal.size()-1;
        while(i<j){
            if(pal[i]!=pal[j])
                return 0;
            i++;
            j--;
        }
        return 1;
    }
};