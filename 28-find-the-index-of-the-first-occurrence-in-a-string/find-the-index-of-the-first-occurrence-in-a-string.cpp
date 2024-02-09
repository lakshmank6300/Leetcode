class Solution {
public:
    int strStr(string haystack, string needle) {
        int res=haystack.find(needle);
        return (res>=haystack.size())?-1:res;
    }
};