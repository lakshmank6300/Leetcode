class Solution {
public:
    long long minimumSteps(string s) {
        long long z=0,res=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='0')
                z++;
            else
                res+=z;
        }
        return res;
    }
};