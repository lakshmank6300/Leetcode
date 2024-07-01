class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int ans=0;
        if(arr.size()<=2){
            return false;
        }
        for(int i=0;i<arr.size();i++){
            if((arr[i]&1)==1){
                ans++;
                if(ans==3)
                    return true;
            }
            else{
                ans=0;
            }
        }
        return false;
    }
};