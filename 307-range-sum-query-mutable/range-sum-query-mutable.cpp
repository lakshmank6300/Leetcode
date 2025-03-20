class NumArray {
private:
    vector<int>seg;
    int n;
    void Build(vector<int>&nums,int ind,int left,int right){
        if(left==right){ seg[ind]=nums[left]; return; }
        int mid=(left+right)/2;
        Build(nums,2*ind+1,left,mid);
        Build(nums,2*ind+2,mid+1,right);
        seg[ind]=(seg[2*ind+1]+seg[2*ind+2]);
    }
    int Query(int ind,int ql,int qr,int rl,int rr){
        if(ql<=rl && rr<=qr){
            return seg[ind];
        }
        if(qr<rl || rr<ql) return 0;
        int mid=(rr+rl)/2;
        int left = Query(ind*2+1,ql,qr,rl,mid);
        int right = Query(ind*2+2,ql,qr,mid+1,rr);
        return left+right;
    }
    void Point_Update(int ind,int rl,int rr,int val,int reqind){
        if(rl>reqind || rr<reqind) return;
        if(rl==rr){ seg[ind]=val; return; }
        int mid=(rr+rl)/2;
        Point_Update(ind*2+1,rl,mid,val,reqind);
        Point_Update(ind*2+2,mid+1,rr,val,reqind);
        seg[ind]=seg[ind*2+1]+seg[ind*2+2];
    }
public:
    NumArray(vector<int>& nums) {
        n=nums.size();
        seg.assign(n*4+1,0);
        Build(nums,0,0,n-1);
    }
    void update(int index, int val) {
        Point_Update(0,0,n-1,val,index);
    }
    
    int sumRange(int left, int right) {
        return Query(0,left,right,0,n-1);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */