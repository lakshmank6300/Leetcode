class Solution {
public:
    int totalFruit(vector<int>& f) {
        pair<int,int>a={-1,0};
        pair<int,int>b={-1,0};
        // a.first=23;
        int n= f.size();
        int mx=0,j=0;
        for(int i=0;i<n;i++){
            if(a.first==-1 || f[i]==a.first){
                if(a.first==-1) a.first=f[i];
                a.second++;
            }
            else if(b.first==-1 || f[i]==b.first){
                if(b.first==-1) b.first=f[i]; 
                b.second++;
            }
            else{
                while(a.second!=0 && b.second!=0){
                    if(f[j]==a.first) a.second--;
                    if(f[j]==b.first) b.second--;
                    j++;
                }
                if(a.second==0){ a={f[i],1}; }
                if(b.second==0){ b={f[i],1}; }
            }
            mx=max(a.second+b.second,mx);
        }
        return mx;
    }
};