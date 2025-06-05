#define ll long long
struct Hashing{

    ll binexp(ll a , ll b , ll m){
        ll res=1;
        while(b>0){
            if((b&1)==1) res=(res*a)%m;
            a=(a*a)%m;
            b>>=1;
        }
        return res;
    }

    ll mminv(ll a,ll m){
        return binexp(a,m-2,m);
    }
    ll n;
    string s;
    ll m,base;
    vector<int>powers;
    vector<int>invPowers;
    vector<int>prefHashes;
    vector<int>suffHashes;
    Hashing(string &a){
        s=a;
        n=s.size();
        m=1e9+7;
        base=41;
        powers.resize(n);
        invPowers.resize(n);
        prefHashes.resize(n);
        suffHashes.resize(n);
        powers[0]=1;
        for(int i=1;i<n;i++){
            powers[i]=(powers[i-1]*base) % m;
        }
        invPowers[n-1]=mminv(powers[n-1],m);
        for(int i=n-2;i>=0;i--){
            invPowers[i]=(invPowers[i+1]*base)%m;
        }
        for(int i=0;i<n;i++){
            prefHashes[i]=((s[i]-'a'+1LL)*powers[i])%m;
            prefHashes[i]=(prefHashes[i] + ((i>0)?prefHashes[i-1]:0LL))%m;
        }
        for(int i=n-1;i>=0;i--){
            suffHashes[i]=((s[i]-'a'+1LL) * powers[n-i-1])%m;
            suffHashes[i]= (suffHashes[i]  + ((i<n-1)?suffHashes[i+1]:0LL))%m;
            // cout<<suffHashes[i]<<" ";
        }
        // cout<<suffHashes.size();
        // for(int i=0;i<n;i++){
        //     cout<<suffHashes[i]<<" ";
        // }
        cout<<endl;
    }

    ll getPrefHash(ll l , ll r){
        ll val1 = ((l>0)?prefHashes[l-1]:0LL);
        // ll val2=0;
        ll val2 = prefHashes[r];
        ll hash = ((val2-val1+m)%m * invPowers[l])%m;
        return hash;
    }
    
    
    ll getSuffHash(ll l, ll r){
        ll val1 = ((r<n-1)?suffHashes[r+1]:0LL);
        ll val2 = suffHashes[l];
        ll hash = ((val2-val1+m)%m * invPowers[n-r-1])%m;
        return hash;
    }
};

class Solution {
public:
    string shortestPalindrome(string s) {
        if(s=="") return "";
        Hashing H(s);
        ll n=s.size();
        string st="";
        int i=n-1;
        string start="";
        for(i=n-1;i>=0;i--){
            if(H.getPrefHash(0,i) == H.getSuffHash(0,i)){
                break;
            }
            start+=s[i];
        }
        return start+s;
    }
};