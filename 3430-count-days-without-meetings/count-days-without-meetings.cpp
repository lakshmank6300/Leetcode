
bool sortcol(const vector<int>&a,const vector<int>&b){
    return a[0]<b[0];
}class Solution {
public:
    int countDays(int days, vector<vector<int>>& s) {
        int res=0;
        sort(s.begin(),s.end(),sortcol);
        res+=s[0][1]-s[0][0]+1;
        for(int i=1;i<s.size();i++){
            if(s[i-1][1]>= s[i][0] && s[i-1][1]>= s[i][1]){
                s[i][0]=s[i-1][0];
                s[i][1]=s[i-1][1];
                continue;
            }
            else if(s[i-1][1]>=s[i][0]){
                cout<<res<<endl;
                res+=s[i][1]-s[i][0]+1;
                cout<<res<<endl;
                res-=s[i-1][1]-s[i][0]+1;
                cout<<res<<endl;
            }
            else
                res+=s[i][1]-s[i][0]+1;
            
        }
        return days-res;
    }
};