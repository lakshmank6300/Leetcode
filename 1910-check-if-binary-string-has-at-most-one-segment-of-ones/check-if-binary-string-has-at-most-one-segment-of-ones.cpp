class Solution {
public:
    bool checkOnesSegment(string s) {
        // bool flag = false;
        // for(int i = 0; i < s.size() ;i++){
        //     if( !(flag) && s[i] == '1') flag = true;
        //     else if( flag && s[i] == '1' && s[i-1] == '0') return false;
        // }
        // if(flag) return true;
        // return false;
        for(int i = 1; i < s.size(); i++){
            if(s[i-1] == '0' && s[i] == '1') return false;
        }
        return true;
    }
};