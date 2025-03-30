class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>lstocc(26,-1);
        vector<int>res;
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            if(lstocc[s[i]-'a']==-1) lstocc[s[i]-'a']=i;
        }
        int prev=0,mx=0;
        for(int i=0;i<n;i++){
            mx=max(mx,lstocc[s[i]-'a']);
            if(i==mx){ res.push_back(i-prev+1); prev=i+1; mx=0; }
        }
        return res;
    }
};