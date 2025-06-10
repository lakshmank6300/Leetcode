class Solution {
public:
    string minWindow(string s, string t) {
        int j=0,n=s.size();
        map<char,int>mpp1,mpp2;
        for(int i=0;i<t.size();i++){ mpp1[t[i]]++; }
        int tar=mpp1.size();
        int cnt=0,mn=INT_MAX,a=-1,b=-1;
        for(int i=0;i<n;i++){
            mpp2[s[i]]++;
            if(mpp2[s[i]]==mpp1[s[i]] && mpp1[s[i]]!=0){ cnt++;}
            while(cnt>=tar){
                if(i-j<mn){
                    a=j;
                    b=i;
                    mn=i-j;
                }
                mpp2[s[j]]--;
                if(mpp2[s[j]]<mpp1[s[j]]){
                    cnt--;
                }
                j++;
            }
        }
        if(a==-1 && b==-1){
            return "";
        }
        else{
            return s.substr(a,b-a+1);
        }
    }
};