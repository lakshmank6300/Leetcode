class Solution {
public:
    string get_string(char c){
        if(c=='2')
            return "abc";
        else if(c=='3')
            return "def";
        else if(c=='4')
            return "ghi";
        else if(c=='5')
            return "jkl";
        else if(c=='6')
            return "mno";
        else if(c=='7')
            return "pqrs";
        else if(c=='8')
            return "tuv";
        else
            return "wxyz";
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)
            return {};
        vector<string>arr={""};
        vector<string>res;
        for(int i=0;i<digits.size();i++){
            string s=get_string(digits[i]);
            for(int j=0;j<arr.size();j++){
                for(int k=0;k<s.size();k++){
                    res.push_back(arr[j]+s[k]);
                }
            }
            arr=res;
            res={};
        }
        return arr;
    }
};