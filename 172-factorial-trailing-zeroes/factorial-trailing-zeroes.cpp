vector<int>dp(1e4+1,0);
class Solution {
public:
    void solve(){
        int cnt=0;
        for(int i=1;i<=1e4;i++){
            int temp=i;
            while(temp!=0 && temp%5==0){
                cnt++;
                temp/=5;
            }
            dp[i]=cnt;
        }
    }
    int trailingZeroes(int n) {
        if(dp[5]!=1){
            solve();
        }
        return dp[n];
    }
};