class Solution {
public:
    string reverseParentheses(string s) {
        stack<string>st;
        string res="",ch="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(ch);
                ch="";
            }
            else if(s[i]==')'){
                string top=st.top();
                reverse(ch.begin(),ch.end());
                top+=ch;
                ch=top;
                st.pop();
            }
            else{
                ch+=s[i];
            }
            cout<<ch<<" ";
        }
        return ch;
    }
};