class Solution {
public:
    long long mod=1e9+7;
    map<int,int>mpp;
    long long power(long long a,long long b){
        // if(b==1) return a;
        if(b==0) return mpp[b];
        long long left = power(a,b/2)%mod;
        if(b%2==1){
            left=(left*left)%mod;
            left=(left*a)%mod;
        }
        else {
            left=(left*left)%mod;
        }
        return mpp[b]=left;
    }
    int countGoodNumbers(long long n) {
        mpp[0]=1;
        long long five=power(5,(n+1)/2);
        mpp.clear();
        mpp[0]=1;
        long long four=power(4,n/2);
        return (five*four)%mod;
    }
};