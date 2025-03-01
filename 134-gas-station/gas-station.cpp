class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=cost.size(),fuel=0,gs=0,cs=0,ind=0,sm=0;
        for(int i=0;i<n;i++){
            gs+=gas[i];
            cs+=cost[i];
        }
        if(gs<cs)   return -1;
        for(int i=0;i<n-1;i++){
            fuel+=gas[i];
            if(fuel<cost[i]){
                fuel=0;
                ind=i+1;
            }
            else fuel-=cost[i];
        }
        return ind;
    }
};
