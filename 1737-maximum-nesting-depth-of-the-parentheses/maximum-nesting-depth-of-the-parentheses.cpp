class Solution {
public:
    int maxDepth(string s) {
        int mx=0,c=0;
        for(int i=0;i<s.size();i++){
        if(s[i]=='(')
            c++;
        else if(s[i]==')')
            c--;
        if(c>mx)
            mx=c;
        }
    return mx;
    }
};