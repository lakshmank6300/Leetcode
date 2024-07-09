class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double ans=customers[0][1];
        int st=customers[0][0]+customers[0][1];
        for(int i=1;i<customers.size();i++){
            if(st>customers[i][0]){
                st+=customers[i][1];
                ans+=st-customers[i][0];
            }
            else{
                ans+=customers[i][1];
                st=customers[i][0]+customers[i][1];
            }
            cout<<ans<<" ";
        }
        return ans/customers.size();
    }
};