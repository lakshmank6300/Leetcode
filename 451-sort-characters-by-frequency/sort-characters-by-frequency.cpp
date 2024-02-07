class Solution {
public:
    string frequencySort(string s) {
        map<char,int>cnt;
        vector<int>count;
        for(int i=0;i<s.size();i++){
            cnt[s[i]]++;
        }
        map<int,char>mp;
        int mx=0;
        string res="";
        for(auto i=cnt.begin();i!=cnt.end();i++){
            if(mx<i->second)
                mx=i->second;
        }
        vector<vector<char>>ans(mx+1);
        for(int i=0;i<s.size();i++){
            ans[cnt[s[i]]].push_back(s[i]);
        }
        for(int i=0;i<ans.size();i++){
            sort(ans[i].begin(),ans[i].end());
        }
        for(int i=ans.size()-1;i>=0;i--){
            for(int j=0;j<ans[i].size();j++){
                res+=ans[i][j];
            }
        }
        return res;
    }
};