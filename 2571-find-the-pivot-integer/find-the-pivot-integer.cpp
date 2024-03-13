class Solution {
public:
    int pivotInteger(int n) {
        int s=n*(n+1)/2,f=((n/2-1)*(n/2))/2,l;
        for(int i=n/2;i<=n;i++){
            f+=i;
            l=s-f+i;
            if(f==l)
                return i;
        }
        return -1;
    }
};