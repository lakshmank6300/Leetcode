class Solution {
public:
    string makeFancyString(string s) {
        int cnt=1;
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]==s[i+1]){
                if(cnt==2)
                    continue;
                cnt++;
                res+=s[i];
            }
            else{
                res+=s[i];
                cnt=1;
            }
        }
        return res;
    }
};