class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int flag=0;
        if(k<0) { reverse(code.begin(),code.end()); flag=1;}
        int sm=0;
        int n=code.size();
        vector<int>res(n,0);
        if(k==0)    return res;
        k=abs(k);
        for(int i=1;i<=k;i++) sm+=code[i];
        for(int i=1;i<=code.size();i++){
            res[i-1]=sm;
            sm-=code[(i)%n];
            sm+=code[(i+k)%n];
        }
        if(flag==1) reverse(res.begin(),res.end());
        return res;
    }
};