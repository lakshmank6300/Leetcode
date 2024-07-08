class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>vec(n+1,1);
        int c=n,i=0,cnt=0;
        while(c!=1){
            if(vec[(i%n)+1]==1)
                cnt++;
            if(cnt==k){
                cout<<(i%n)+1<<" ";
                vec[(i%n)+1]=0;
                c--;
                cnt=0;
            }
            i++;
        }
        int ans=0;
        for(int j=1;j<=n;j++)
            if(vec[j]==1)
                ans=j;
        return ans;
    }
};