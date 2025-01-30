class Solution {
public:
    unordered_map<char,string>mpp;
    vector<string>res;
    void solve(string digits,int start,int end,string st){
        if(start>=end){
            res.push_back(st);
            return;
        }
        for(int i=0;i<mpp[digits[start]].size();i++){
            solve(digits,start+1,end,st+mpp[digits[start]][i]);
        }
    }
    vector<string> letterCombinations(string digits) {
        mpp['2']="abc";
        mpp['3']="def";
        mpp['4']="ghi";
        mpp['5']="jkl";
        mpp['6']="mno";
        mpp['7']="pqrs";
        mpp['8']="tuv";
        mpp['9']="wxyz";
        if(digits.size()==0)
            return res;
        solve(digits,0,digits.size(),"");
    return res;
    }
};