class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>arr=heights;
        int c=0;
        sort(heights.begin(),heights.end());
        for(int i=0;i<heights.size();i++)
            if(heights[i]!=arr[i])
                c++;
        return c;
    }
};