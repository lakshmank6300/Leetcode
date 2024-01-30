class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long >st;
        for(long long i=0;i<tokens.size();i++){
            string t=tokens[i];
            if(t=="+" || t=="-" || t=="*" || t=="/"){
                long long  b=st.top();
                st.pop();
                long long a=st.top();
                st.pop();
                if(t=="+")
                    st.push(a+b);
                else if(t=="-")
                    st.push(a-b);
                else if(t=="*")
                    st.push(a*b);
                else if(t=="/")
                    st.push(a/b);
            }
            else
                st.push(stoi(t));
        }
        return st.top();
    }
};