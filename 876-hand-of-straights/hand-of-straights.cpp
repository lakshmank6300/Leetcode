class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        map<int,int>mp;
        if(n%groupSize!=0)
            return false;
        for(int i=0;i<n;i++){
            mp[hand[i]]++;
        }
        while(!mp.empty()){
            int k=groupSize;
            int fst=mp.begin()->first;
            for(int j=0;j<groupSize;j++){
                if(mp[fst+j]==0){
                    return false;
                }
                mp[fst+j]--;
                if(mp[fst+j]<=0){
                    mp.erase(fst+j);
                }
            }
        }
        return true;
    }
};