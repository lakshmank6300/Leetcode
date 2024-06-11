class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mpp;
        vector<int>extra;
        vector<int>res;
        for(int i=0;i<arr1.size();i++){
            mpp[arr1[i]]++;
        }
        for(int i=0;i<arr2.size();i++){
            while(mpp[arr2[i]]){
                mpp[arr2[i]]--;
                res.push_back(arr2[i]);
            }
        }
        for(auto i=mpp.begin();i!=mpp.end();i++){
            for(int j=0;j<i->second;j++)
                extra.push_back(i->first);
        }
        sort(extra.begin(),extra.end());
        for(int i=0;i<extra.size();i++)
            res.push_back(extra[i]);
        return res;
    }
};