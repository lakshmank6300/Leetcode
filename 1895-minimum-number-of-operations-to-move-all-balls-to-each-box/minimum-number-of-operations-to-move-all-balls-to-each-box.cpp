class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>pref(boxes.size(),0);
        int cnt=0,res=0;
        for(int i=0;i<boxes.size();i++){
            res+=cnt;
            if(boxes[i]=='1')
                cnt++;
            pref[i]+=res;
        }
        res=0,cnt=0;
        for(int i=boxes.size()-1;i>=0;i--){
            res+=cnt;
            if(boxes[i]=='1')
                cnt++;
            pref[i]+=res;
        }
        return pref;
    }
};

// 001011

// 0 0 1 1 2 3
// 0 0 1 2 4 7

// 3 3 3 2 2 1
// 14 11 8 5 3 1
