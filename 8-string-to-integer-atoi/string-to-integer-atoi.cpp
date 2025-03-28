class Solution {
public:
    // int reverse(int n){
    //     int res=0;
    //     while(n!=0){
    //         res=res*10+n%10;
    //         n/=10;
    //     }
    //     return res;
    // }
    int myAtoi(string s) {
        int n=s.size();
        long long res=0;
        int i=0;
        bool neg=false;
        while(i<n && s[i]==' ')
            i++;
        if(i<n && s[i]=='-'){
            neg=true;
            i++;
        }
        else if(i<n && s[i]=='+')
            i++;
        for(i;i<n;i++){
            if(s[i]>='0' && s[i]<='9'){
                res=res*10+(s[i]-'0');
            }
            else break;
            if(neg && -res<=INT_MIN){ return INT_MIN; }
            if(neg==false && res>=INT_MAX) return INT_MAX;
        }
        int k=-2147483648;
        if(neg==true) 
            res=-(res);
        return (res);
    }
};