class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<int>ids;
        for(int i=0;i<names.size();i++){
            ids.push_back(i);
        }
        auto compare= [&] (int h1,int h2){
            return heights[h1]>=heights[h2];
        };
        sort(ids.begin(),ids.end(),compare);
        vector<string>res;
        for(int i=0;i<names.size();i++)
            res.push_back(names[ids[i]]);
        return res;
    }
};