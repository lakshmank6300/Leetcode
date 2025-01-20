class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        vector<int>row(n,0);
        vector<int>col(m,0);
        map<int,pair<int,int>>mpp;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mpp[mat[i][j]]={i,j};
            }
        }
        for(int i=0;i<arr.size();i++){
            int r=mpp[arr[i]].first,c=mpp[arr[i]].second;
            cout<<r<<" "<<c<<endl;
            row[r]++;
            col[c]++;
            if(row[r]==m || col[c]==n)
                return i;
        }
        return -1;
    }
};