class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int>mp;
        string res="";
        int i=0;
        for(i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        i=0;
        while(i<order.size()){
            while(mp[order[i]]!=0){
                res+=order[i];
                mp[order[i]]--;
            }
            i++;
        }
        for(int i=0;i<s.size();i++){
            while(mp[s[i]]!=0){
                res+=s[i];
                mp[s[i]]--;
            }
        }
        return res;
    }
};