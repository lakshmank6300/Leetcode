class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>cnt(n+1,0);
        int imp=0,c=0;
        for(int i=0;i<trust.size();i++){
            cnt[trust[i][0]]++;
        }
       for(int i=1;i<cnt.size();i++){
           if(cnt[i]==0){
                imp=i;
                break;
           }
       }
       if(imp==0)
            return -1;
       for(int i=0;i<trust.size();i++){
            if(trust[i][1]==imp)
                c++;
       }
       if(c==n-1)
        return imp;
        else
        return -1;
    }
};