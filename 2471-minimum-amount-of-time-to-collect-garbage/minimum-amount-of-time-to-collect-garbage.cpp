class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int res=0,m=travel.size()+1;
        int p=m,g=m;
        for(int i=1;i<travel.size();i++) travel[i]=travel[i-1]+travel[i];
        travel.push_back(0);
        for(int i=0;i<garbage.size();i++){
            for(int j=0;j<garbage[i].size();j++){
                if(garbage[i][j]=='M' && i!=0)
                    m=i;
                else if(garbage[i][j]=='P' && i!=0)
                    p=i;
                else if(garbage[i][j]=='G' && i!=0)
                    g=i;
            res++;
            }
        }
        res+=travel[m-1]+travel[p-1]+travel[g-1];
        return res;
    }
};