class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
    int i=0,j=0,n=nums.size();
    vector<int>res(2);
    int temp=INT_MAX;
    vector<int>pointers(n,0);
    priority_queue<int>maxHeap;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minHeap;
    for(int i=0;i<n;i++){
        maxHeap.push(nums[i][0]);
        minHeap.push({nums[i][0],i});
    }
    int diff=0;
    int mnind=INT_MAX;
    while(1){
        int mn=1e5,mx=-1e5;
        // for(int j=0;j<n;j++){
        //     if(nums[j][pointers[j]]<mn){
        //         mn=nums[j][pointers[j]];
        //         mnind=j;
        //     }
        //     if(nums[j][pointers[j]]>mx)
        //         mx=nums[j][pointers[j]];
        // }
        // minheap.push(nums[j][pointers[j]]);
        pair<int,int>minim=minHeap.top();
        mn=minim.first;
        mnind=minim.second;
        mx=maxHeap.top();
        minHeap.pop();
        if(mx-mn<temp){
            temp=mx-mn;
            res[0]=mn, res[1]=mx;
        }
        pointers[mnind]++;
        if(pointers[mnind]>=nums[mnind].size()){
            break;
        }
        minHeap.push({nums[mnind][pointers[mnind]],mnind});
        maxHeap.push(nums[mnind][pointers[mnind]]);
    }
    return res;
    }
};