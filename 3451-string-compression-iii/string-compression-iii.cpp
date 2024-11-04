class Solution {
public:
    string compressedString(string word) {
        int c=1,i;
        string ans;
        for(i=0;i<word.size()-1;i++){
            if(word[i]==word[i+1]){
                c++;
            }
            else{
                if(c!=0){
                    ans+=to_string(c);
                    ans+=word[i];
                    c=1;
                }
                else
                    c=1;
            }
                if(c==9){
                    ans+='9';
                    c=0;
                    ans+=word[i];
                }
        }
        if(c>9){
            ans+='9';
            ans+=word[i];
            ans+='1'+word[i];
        }
        else{
            if(c!=0){
            ans+=to_string(c);
            ans+=word[i];
            }
        }
        return ans;
    }
};