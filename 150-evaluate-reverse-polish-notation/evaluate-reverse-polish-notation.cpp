class Solution {
public:
    bool isOper(string ch){
        if(ch=="*" || ch=="/" || ch=="-" || ch=="+")
            return true;
        return false;
    }
    int evalRPN(vector<string>& s) {
        int n=s.size();
        int res=0;
        stack<int>st;
        for(int i=0;i<n;i++){
            if(!(isOper(s[i]))){
                st.push(stoi(s[i]));
            }
            else{
                char ch=s[i][0];
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                switch(ch){
                    case '*':
                        st.push(b*a);
                        break;
                    case '/':
                        st.push(b/a);
                        break;
                    case '-':
                        st.push(b-a);
                        break;
                    case '+':
                        st.push(a+b);
                        break;
                }
            }
                // cout<<st.top();
            // return 0;
        }
        return st.top();
    }
};