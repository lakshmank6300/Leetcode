bool compare(pair<char,int>a,pair<char,int>b){
    return a.second>b.second;
}
class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mpp;
        string res="";
        for(int i=0;i<s.size();i++) mpp[s[i]]++;
        vector<pair<char,int>>vec(mpp.begin(),mpp.end());
        sort(vec.begin(),vec.end(),compare);
        for(int i=0;i<vec.size();i++){
            int sec=vec[i].second;
            while((sec)--){
                res+=vec[i].first;
            }
        }
        return res;
    }
};