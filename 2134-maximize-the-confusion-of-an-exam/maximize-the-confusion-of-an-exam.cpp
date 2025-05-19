class Solution {
public:
    int maxConsecutiveAnswers(string ans, int k) {
        int mx=0,n=ans.size(),t=0,f=0,j=0;
        for(int i=0;i<n;i++){
            if(ans[i]=='T') t++;
            else f++;
            while(min(f,t)>k){
                // cout<<t<<" ";
                if(ans[j]=='T') t--;
                else f--;
                j++;
            }
            cout<<j<<" ";
            mx=max(mx,i-j+1);
        }
        return mx;
    }
};