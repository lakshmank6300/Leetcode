class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i=0;i<s.size();i++){
            string a=s.substr(i,s.size()-i)+s.substr(0,i);
            if(a==goal)
                return true;
        }
        return false;
    }
};