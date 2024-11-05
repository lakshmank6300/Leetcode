class Solution {
public:
    int minChanges(string s) {
        int cnt=1,res=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]){
                if(cnt%2==1){
                    s[i+1]=s[i];
                    res++;
                    i++;
                    cout<<i+1<<" ";
                }
                cnt=1;
            }
            else
                cnt++;
        }
        return res;
    }
};