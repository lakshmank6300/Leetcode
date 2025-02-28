class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(begin(intervals),end(intervals));
        vector<vector<int>>res;
        int n = intervals.size();
        for(int i = 0 ; i < n - 1 ; i++ ){
            int s1=intervals[i][0];
            int e1=intervals[i][1];
            int s2=intervals[i+1][0];
            int e2=intervals[i+1][1];
            //  if(e1>s2)
            if(e1<s2){
                res.push_back({s1,e1});
            }
            else{
                if(e1>e2){
                    intervals[i+1][0]=s1;
                    intervals[i+1][1]=e1;
                }
                else{
                    intervals[i+1][0]=s1;
                }
            }
        }
        res.push_back({intervals[n-1][0],intervals[n-1][1]});
        return res;
    }
};