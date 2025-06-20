#define ll long long

class Solution {
public:
    int mod = 1e9+7;
    ll binExp(ll a, ll b){
        ll res = 1;

        while(b!=0){
            if(b % 2 == 1) res = (res * a) % mod ;
            a = (a * a) % mod;
            b>>=1;
        }
        return res;
    }


    int countGoodNumbers(long long n) {
        return (binExp(5,n - n/2)*binExp(4,n/2)) % mod;
    }
};