#define ll long long

ll binexp(ll a , ll b, ll m){
    a=a%m;
    ll res=1;
    while(b!=0){
        if((b&1)==1) res = (res*a)%m;
        a = (a*a)%m;
        b>>=1;
    }
    return res;
}

ll mminverse(ll a,ll m){
    return binexp(a,m-2,m);
}
struct Hashing{
    private:
        vector<ll>hashPowers;
        vector<ll>inverseHashPowers;
        vector<ll>hashValues;
        string s;
        ll n;
        ll m;
    public:
    Hashing(string a){
        s=a;
        n=s.size();
        hashPowers.resize(n);
        inverseHashPowers.resize(n);
        hashValues.resize(n);
        m=1e9+7;
        long long base=31;
        //Calculating Powers to multiply with modulo to get hash
        hashPowers[0]=1;
        for(ll i=1;i<n;i++){
            hashPowers[i] = (base*hashPowers[i-1])%m;
        }
        // cout<<endl;
        // hashPowers = [(31^0)%m  , (31^1)%m , (31^2)%m , (31^3)%m ...]
        //Calculating inverse primes which are used while calculating hash of substrings;
        // step 1 => calculate modular multiplicative inverse of last number using fermats little theorem
        inverseHashPowers[n-1] =  mminverse(hashPowers[n-1],m);
        // inverseHashPowewrs[n-1] = ((31^(n-1))^-1 % mod)
        for(ll i=n-2;i>=0;i--){
            inverseHashPowers[i]=(inverseHashPowers[i+1]*base)%m;
        }
        // for(int i=0;i<n;i++){
        //     cout<<inverseHashPowers[i]<<" ";
        // }

        
        // inverseHashPowers = [31^0 , 31^-1 , 31^-2 , ....]
        for(ll i=0;i<n;i++){
            hashValues[i] =( (s[i]-'a' + 1LL) * hashPowers[i] ) % m;
            hashValues[i] = (hashValues[i]+ ((i>0) ? hashValues[i-1]:0LL));
        }
    }

            
    ll getHash(ll l , ll r){
        ll val1 = (l>0)?hashValues[l-1]:0LL; // before one of beginning of window
        ll val2 = hashValues[r];            // the last one of window
        ll hash = (((val2-val1+m)%m) * inverseHashPowers[l])%m;

        return hash;
    }


};


class Solution {
public:
    string longestPrefix(string s) {
        string str="";
        int n=s.size();
        Hashing H(s);
        int res=-1;
        for(int i=0;i<n-1;i++){
            ll left = H.getHash(0,i);
            ll right= H.getHash(n-i-1,n-1);
            if(left==right){
                res=i;
            }
        }
        if(res==-1) return "";
        else return s.substr(0,res+1);
    }
};