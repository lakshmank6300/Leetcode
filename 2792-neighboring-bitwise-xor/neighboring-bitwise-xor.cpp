class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n=derived.size();
        vector<int>original(n);
        original[0]=0;
        for(int i=0;i<n-1;i++){
            if(derived[i]==1)
                original[i+1]=1-original[i];
            else
                original[i+1]=original[i];
        }
        if(derived[n-1]==original[0]^original[n-1])
            return true;
        else
            return false;
    }
};