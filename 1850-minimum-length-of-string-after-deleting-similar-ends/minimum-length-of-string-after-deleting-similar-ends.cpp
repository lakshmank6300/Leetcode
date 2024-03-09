class Solution {
public:
    int minimumLength(string s) {
        int i=0,j=s.size()-1,f=0;
        while(i<j){
            f=0;
            while(s[i]==s[j]){
                if(s[j-1]==s[i])
                    j--;
                else
                    i++;
                if(i==j)
                    return 0;
                f=1;
            }
            if(f==0)
                return j-i+1;
            j--;
        }
        return j-i+1;
    }
};