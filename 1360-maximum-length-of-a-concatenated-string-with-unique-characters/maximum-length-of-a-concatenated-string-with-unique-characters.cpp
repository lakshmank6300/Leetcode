class Solution {
public:
    bool is_sorted_string_unique(string s){
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1])
                return 0;
        }
        return 1;
    }
    int maxLength(vector<string>& arr) {
        int mx=0,n=arr.size();
        vector<string>res;
        for (int i = 0; i < (1 << n); ++i) {
        string subsequence="";
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {  // If the j-th bit is set, include the element
                subsequence+=arr[j];
            }
        }
        sort(subsequence.begin(),subsequence.end());
         if(is_sorted_string_unique(subsequence)){
             if(subsequence.size()>mx)
                mx=subsequence.size();
         }
    }
        return mx;
    }
};