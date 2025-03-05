class Solution {
public:
    long long coloredCells(int n) {
        long long res=n;
        return (res*res)+(res-1)*(res-1);
    }
};