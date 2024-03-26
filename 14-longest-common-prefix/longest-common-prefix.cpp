class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        string res="";
        char k;
        int mn=INT_MAX;
        for(int i=0;i<str.size();i++){
            if(str[i].size()<mn)
                mn=str[i].size();
        }
        cout<<mn;
        int i=0,j=0;
        for(i=0;i<mn;i++){
            j=0;
            k=str[j][i];
            for(j=0;j<str.size();j++){
                if(str[j][i]!=k)
                    return res;
            }
            res+=k;

        }
        return res;
    }
};