class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size(),res=0,i=0;
        map<char,int>mpp;
        for(int j=0;j<n;j++){
            mpp[s[j]]++;
            if(mpp.size()==3){
                res+=n-j;
                mpp[s[i]]--;
                if(mpp[s[i]]==0)
                    mpp.erase(s[i]);
                i++;
            }
            while(mpp.size()==3 && i<n){
                mpp[s[i]]--;
                if(mpp[s[i]]==0)
                    mpp.erase(s[i]);
                res+=n-j;
                i++;
            }
        }
        return res;
    }
};