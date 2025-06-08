#define ll long long
struct Hashing{
    vector<ll>powers;
    vector<ll>invpowers;
    vector<ll>hashValues;
    string s;
    int n;
    ll m;

    ll binexp(ll a, ll b , ll m){
        ll res=1;
        while(b>0){
            if((b&1)==1) res = (a*res)%m;
            a=(a*a)%m;
            b>>=1;
        }
        return res;
    }
    ll mminv(ll a , ll m){
        return binexp(a,m-2,m);
    }
    Hashing(string a){
        s=a;
        m=1e9+7;
        int base=31;
        n=a.size();
        powers.resize(n);
        invpowers.resize(n);
        hashValues.resize(n);
        powers[0]=1;
        for(int i=1;i<n;i++){
            powers[i]=(powers[i-1]*base)%m;
        }
        invpowers[n-1]=mminv(powers[n-1],m);
        for(int i=n-2;i>=0;i--){
            invpowers[i]=(invpowers[i+1]*base)%m;
        }
        for(int i=0;i<n;i++){
            hashValues[i]=((s[i]-'a'+1)*powers[i])%m;
            hashValues[i]=(hashValues[i]+((i>0)?hashValues[i-1]:0LL));
        }
    }
    ll getHash(ll l,ll r){
        ll val1 = (l>0)?hashValues[l-1]:0LL;
        ll val2 = hashValues[r];
        ll hash = (((val2-val1+m)%m)*invpowers[l])%m;
        return hash;
    }
};
class Solution {
public:
    int distinctEchoSubstrings(string text) {
        int n = text.size();
        set<int>st;
        Hashing H(text);
        for(int i=0;i<n;i+=2){
            for(int j=0;j<n-i-1;j++){
                int dist=i/2;
                ll pref = H.getHash(j,j+dist);
                ll suff = H.getHash(j+dist+1,j+i+1);
                if(pref==suff) st.insert(pref);
            }
        }
        return st.size();
    }
};