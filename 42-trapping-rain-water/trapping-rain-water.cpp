class Solution {
public:
    int trap(vector<int>& height) {
        int totalWaterTrapped = 0 , n = height.size();
        vector<int> leftMax(n,0);
        vector<int> rightMax(n,0);
        int mx = -1,mxInd = -1;
        for(int i = 0; i < height.size(); i++){
            leftMax[i] = mxInd;
            if(height[i] > mx){
                mxInd = i;
                mx = height[i];
            }
        }
        mx = -1;
        mxInd = -1;
        for(int i = n-1; i >= 0; i--){
            rightMax[i] = mxInd;
            if(height[i] > mx){
                mxInd = i;
                mx = height[i];
            }
        }
        
        // for(int i = 0; i < n; i++){
        //     cout<<leftMax[i]<<" ";
        // }
        //     cout<<endl;
        // for(int i = 0; i < n; i++){
        //     cout<<rightMax[i]<<" ";
        // }
        // rightMax[n-1];
        int sol = 0;
        for(int i = 0; i < n; i++){
            if(leftMax[i] != -1 && rightMax[i] != -1){
                int lm = height[leftMax[i]] , rm = height[rightMax[i]];
                if(min(lm,rm) > height[i]){
                    sol += min(lm,rm) - height[i];
                    cout<<i<<" "<<min(lm,rm)<<endl;
                    }
            }
        }
        return sol;
    }
};