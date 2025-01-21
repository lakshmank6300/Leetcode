class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n=grid[0].size();
        long long row1=0,row2=0;
        for(int i=0;i<n;i++){
            if(i!=0)
                row1+=grid[0][i];
            if(i!=n-1)
                row2+=grid[1][i];
        }
        long long pref=0;
        long long mn=min(row1,row2);
        for(int i=1;i<n;i++){
            pref+=grid[1][i-1];
            row1-=grid[0][i];
            mn=min(mn,max(pref,row1));
        }
        return mn;
        // row1-=grid[0][n-1];
        // int mn1=INT_MAX,mn2=INT_MAX;
        // row2-=grid[1][n-1];
        // cout<<row1<<" "<<row2<<endl;
        // for(int i=1;i<n;i++){
        //     mn1=min(row1,mn1);
        //     row1-=grid[0][i];
        // }
        // for(int i=0;i<n-1;i++){
        //     mn1=min(row2,mn1);
        //     row2-=grid[1][i];
        // }
        // return mn1;;
    }
};