class Solution {
public:
    int arrangeCoins(int n) {
        double si = n;
        double rt=sqrt(1+8*si);
        int s=(-1+rt)/2;
        return s;
    }
};