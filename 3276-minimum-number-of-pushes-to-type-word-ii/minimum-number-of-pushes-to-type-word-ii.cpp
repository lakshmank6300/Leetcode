class Solution {
public:
      int minimumPushes(string word) {
        map<char,int>mp;
        vector<int>cnt;
          int ans=0,j=0;
          int n=mp.size();
          for(int i=0;i<word.size();i++){
              mp[word[i]]++;
          }
        for(auto i=mp.begin();i!=mp.end();i++){
            cnt.push_back(i->second);
        }
        sort(cnt.rbegin(),cnt.rend());
        for(int i=0;i<cnt.size();i++){
            ans+=((i/8)+1)*cnt[i];
        }
          return ans;

        }
};