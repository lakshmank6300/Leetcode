class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        st.push(s[0]);
        for(int i = 1 ; i < s.size() ; i++){
            if(st.empty()){
                st.push(s[i]);
                continue;
            }
            int te = s[i];
            int sch = st.top();
            if(te>=97 and te<=122){
                if(te-32==sch){
                    st.pop();
                }else
                st.push(s[i]);
            }
            else{
                if(te+32==sch){
                    st.pop();
                }
                else
                st.push(s[i]);
            }
        }
        string str="";
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};