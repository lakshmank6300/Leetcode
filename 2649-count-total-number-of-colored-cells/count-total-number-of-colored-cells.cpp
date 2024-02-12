class Solution {
public:
    long long coloredCells(int n) {
        long long a=1,b=1;
        for(int i=1;i<n;i++){
            b=a+4*i;
            a=b;
        }
        return b;
    }
};