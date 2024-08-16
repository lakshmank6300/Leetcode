class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int mx=INT_MIN,mn=INT_MAX,ind;
        for(int i=0;i<arrays.size();i++){
            if(arrays[i][0]<mn){
                mn=arrays[i][0];
                ind=i;
            }
        }
        for(int i=0;i<arrays.size();i++){
            int s=arrays[i].size()-1;
            if(arrays[i][s]>mx && i!=ind)
                mx=arrays[i][s];
        }
        int fir=mx-mn;
        mx=INT_MIN,mn=INT_MAX;
        for(int i=0;i<arrays.size();i++){
            int s=arrays[i].size()-1;
            if(arrays[i][s]>mx){
                mx=arrays[i][s];
                ind=i;
            }
        }
        for(int i=0;i<arrays.size();i++){
            int s=arrays[i].size()-1;
            if(arrays[i][0]<mn && i!=ind)
                mn=arrays[i][0];
        }
        int sec=mx-mn;
        return max(sec,fir);
    }
};