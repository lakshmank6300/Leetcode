class Solution {
public:
    int climbStairs(int n) {
        int a=1,b=2,c;
        if(n==1)
        return 1;
        else if(n==2)
        return 2;
        for(int i=3;i<=n;i++){
            c=a+b;
            if(i==n)
                return c;
            a=b;
            b=c;
        }
        return 0;
    }
};