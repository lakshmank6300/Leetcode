class Solution {
public:
    int deleteab(string s,stack<char>&st,int x){
        int res=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='b' && st.size()!=0 && st.top()=='a'){
                st.pop();
                res+=x;
            }
            else{
                st.push(s[i]);
            }
        }
        return res;
    }int deleteba(string s,stack<char>&st,int y){
        int res=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' && st.size()!=0 && st.top()=='b'){
                st.pop();
                res+=y;
            }
            else{
                st.push(s[i]);
            }
        }
        return res;
    }
    int maximumGain(string s, int x, int y) {
        int ans=0;
        stack<char>st;
        if(x>y){
            ans+=deleteab(s,st,x);
            s="";
            while(st.size()!=0){
                s+=st.top();
                st.pop();
            }
            reverse(s.begin(),s.end());
            ans+=deleteba(s,st,y);
        }
        else{
            ans+=deleteba(s,st,y);
            s="";
            while(st.size()!=0){
                s+=st.top();
                st.pop();
            }
            reverse(s.begin(),s.end());
            ans+=deleteab(s,st,x);
        }
        return ans;
    }
};