class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>>mpp;
        vector<vector<string>>res;
        for(int i=0;i<strs.size();i++){
            vector<int>cnt(27,0);
            for(int j=0;j<strs[i].size();j++){
                cnt[strs[i][j]-'a']++;
            }
            mpp[cnt].push_back(strs[i]);
        }
        for(auto i:mpp){
            res.push_back(i.second);
        }
        return res;
    }
};