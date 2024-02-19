class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0)
        return false;
        return log2(n)==round(log2(n));
    }
};