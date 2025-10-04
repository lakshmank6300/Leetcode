class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int i = 0,n = height.size();
        int j = n-1;
        int mx = 0;
        while(i < j  && i < n && j >= 0){
            mx = max((j-i) * min(height[i],height[j]),mx);
            if(height[i] < height[j]) i++;
            else j--;
        }
        return mx;
    }
};