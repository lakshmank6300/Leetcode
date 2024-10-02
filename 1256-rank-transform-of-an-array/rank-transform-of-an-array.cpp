class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>temp=arr;
        set<int>st;
        map<int,int>mpp;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            st.insert(arr[i]);
            mpp[arr[i]]=st.size();
        }
        for(int i=0;i<temp.size();i++){
            arr[i]=mpp[temp[i]];
        }
        return arr;
    }
};