class Solution {
public:
    int passThePillow(int n, int time) {
         int f=1,i=0;
         while(time--){
            if(i==0)
                f=1;
            else if(i==n-1)
                f=0;
            if(f==1)
                i++;
            else
                i--;
         }
         return i+1;
    }
};