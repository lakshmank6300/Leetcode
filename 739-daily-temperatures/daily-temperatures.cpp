class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>inc;
        vector<int>ans;
        int n=temperatures.size(),k;
        for(int i=0;i<n-1;i++){
            if(temperatures[i]<temperatures[i+1])
                inc.push_back(i+1);
        }
        int ni=inc.size(),j=0;
        for(int i=0;i<n;i++){
            if(j!=ni){
                if(i==inc[j] )
                    j++;
            if(j!=ni){
            k=j;
            while(temperatures[i]>=temperatures[inc[k]] )
            {
                k++;
                if(k>=ni)
                    break;
            }
            if(k<ni)
                ans.push_back(inc[k]-i);
            else
                ans.push_back(0);
            }
            else
                ans.push_back(0);
            }
            else
                ans.push_back(0);
        }
        return ans;
    }
};