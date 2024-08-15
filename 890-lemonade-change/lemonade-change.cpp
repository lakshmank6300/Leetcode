class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f=0,t=0,tw=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                f++;
            }
            else if(bills[i]==10){
                if(f==0)
                    return false;
                f-=1;
                t+=1;
            }
            else{
                if(t!=0 && f!=0){
                    t-=1;
                    f-=1;
                }
                else if(f>=3){
                    f-=3;
                }
                else
                    return false;
            }
        }
        return true;
    }
};