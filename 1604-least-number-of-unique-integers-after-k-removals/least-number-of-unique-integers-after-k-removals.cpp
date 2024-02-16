class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        if(arr.size()==1 && k==1)
            return 0;
        sort(arr.begin(),arr.end());
        int n=arr.size(),c=1,ans=0;
        vector<int>cnt;
        for(int i=0;i<n-1;i++){
            if(arr[i]!=arr[i+1]){
                cnt.push_back(c);
                c=1;
            }
            else{
                c++;
            }   
        }
        cnt.push_back(c);
        for(int i=0;i<cnt.size();i++)
            cout<<cnt[i]<<" ";
        sort(cnt.begin(),cnt.end());
        for(int i=0;i<cnt.size();i++){
            if(k>=cnt[i]){
                k-=cnt[i];
                cnt[i]=0;
            }
            else
                ans++;
        }
        return ans;
    }
};