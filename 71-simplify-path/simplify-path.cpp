class Solution {
public:
    string simplifyPath(string path) {
        int n = path.size();
        stack<string> st;
        for(int i = 0; i < n; i++){
            string str =  "";
            while(i < n && path[i] != '/'){
                str += path[i];
                i++;
            }

            if(str == "") continue;
            else if(str == ".") continue;
            else if(str == ".." ){
                if(!st.empty())
                    st.pop();

            }
            else{
                str = "/"+str;
                st.push(str);
            }
        }
        vector<string> vec;
        while(!st.empty()){
            vec.push_back(st.top());
            st.pop();
        }
        string res = "";
        for(int i = vec.size()-1; i >= 0 ;i--){
            res += vec[i];
        }
        if(res == "") return "/";
        return res;
    }
};