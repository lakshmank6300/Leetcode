class Solution {
public:
    bool predicate(int mid, vector<int>& order, int k,string str){
        int n = str.size();
        int j = -1,cnt = 0;
        for(int i = 0; i <= mid; i++){
            str[order[i]] = '*';
        }
        // if(str[j] == '*') cnt++;
        long long res = 0;
        for(int i = 0;i < n && j < n; i++){
            while(j < n && cnt == 0){
                j++;
                if(str[j] == '*') cnt++;
            }
            res += n-j;
            // cout<<res<<endl;
            if(str[i] == '*') cnt--;
        }
        // cout<<str<<endl;
        // cout<<res<<endl;
        

        return res >= k;
    }


    int minTime(string s, vector<int>& order, int k) {
        int low = 0, high = order.size();
        // int n = s.size();
        long long n =s.size();
        if(n*(n+1)/2 < k) return -1;
        while(low <= high){
            int mid = (low+high)/2;
            if(predicate(mid,order,k,s)){
                high = mid - 1;
            }
            else low = mid + 1;
        }
        // cout<<predicate(0,order,k,s);
        return low;
    }
};