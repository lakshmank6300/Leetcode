class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1,mx=0;
        while(i<j){
            int k=min(height[i],height[j])*(j-i);
            if(mx<k)
                mx=k;
            if(height[i]>=height[j])
                j--;
            else
                i++;
        }
        return mx;
    }
};