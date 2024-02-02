class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> res;
        vector<int>answers;
        int k=1,n=8,j,e=1,num;
        for(int i=2;i<10;i++){
            k+=pow(10,i-1);
            j=0;
            e=e*10+i;
            num=e;
            while(j<n){
                if(num>=low && num<=high){
                    answers.push_back(num);
                }
                else if(num>high)
                    return answers;
                res.push_back(num);
                num=num+k;
                j++;
            }
            n--;
        }
            return answers;
    }
};