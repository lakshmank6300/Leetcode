class Solution {
public:
    int lengthOfLastWord(string s) {
        int f=0,cnt=1;
        for(int i=s.size()-1;i>=0;i--){
            if(f==1 && s[i]!=' '){
                cnt++;
            }
            else if(f==1 && s[i]==' ')
                break;
            else if(s[i]!=' ' && f==0)
                f=1;
        }
        return cnt;
    }
};