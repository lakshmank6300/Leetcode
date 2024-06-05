class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>a(26,0);
        vector<string>res;
        if(words.size()==1){
            for(int i=0;i<words[0].size();i++){
                string s="";
                s=words[0][i];
                res.push_back(s);
            }
            return res;
        }
        for(int i=0;i<words[0].size();i++){
            a[words[0][i]-'a']++;
        }
        // for(int i=0;i<26;i++){
        //     cout<<a[i]<<" ";
        // }
        for(int i=1;i<words.size();i++){
            vector<int>b(26,0);
            for(int j=0;j<words[i].size();j++){
                if(a[words[i][j]-'a']!=0){
                    b[words[i][j]-'a']++;
                    a[words[i][j]-'a']--;
                }
            }
            a=b;
        }
        for(int i=0;i<26;i++){
            if(a[i]!=0){
                while(a[i]){
                    char ch=i+'a';
                    string s="";
                    s=ch;
                    res.push_back(s);
                    a[i]--;
                }
            }
        }
        return res;
    }
};