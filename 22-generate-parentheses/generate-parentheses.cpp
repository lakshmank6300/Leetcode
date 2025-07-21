class Solution {
public:
    void genPar(vector<string>&allPar,int n,string currStr,int open,int close){
        if(close < open) return;
        if(close < 0 || open < 0) return;
        genPar(allPar,n,currStr+"(",open-1,close);
        genPar(allPar,n,currStr +")",open,close-1);
        if(open == 0 && close == 0)
            allPar.push_back(currStr);
    }
    vector<string> generateParenthesis(int n){
        vector<string> allPar;
        genPar(allPar,n,"",n,n);
        return allPar;
    }
    // void generate(vector<string>& allPar,int n,string str,int o=0,int c=0){
    //     if(c>n || o>n){
    //         if(c==n && o==n)
    //             allPar.push_back(str);
    //         return ;
    //     }
    //     if(c!=n)
    //         generate(allPar,n,str+"(",o++,c);
    //     generate(allPar,n,str+")",o,c++);
    //     allPar.push_back(str);
    // }
    // vector<string> generateParenthesis(int n) {
    //     vector<string>allPar;
    //     generate(allPar,n,"",0,0);
    //     return allPar;
    // }
};