class CustomStack {
public:
    vector<int>st;
    int n;
    CustomStack(int maxSize) {
        n=maxSize;
    }
    
    void push(int x) {
        if(st.size()<n)
            st.push_back(x);
    }
    
    int pop() {
        int s=st.size();
        if(s==0){
            return -1;
        }
        int p=st[s-1];
        st.pop_back();
        return p;
    }
    
    void increment(int k, int val) {
        for(int i=0;i<k && i<st.size();i++){
            st[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */