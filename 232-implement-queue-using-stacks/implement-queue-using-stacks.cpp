class MyQueue {
public:
    stack<int>a;
    stack<int>b;
    MyQueue() {
    }
    
    void push(int x) {
        a.push(x);
    }
    
    int pop() {
        while(a.empty()==0){
            b.push(a.top());
            a.pop();
        }
        int k=b.top();
        b.pop();
        while(b.empty()==0){
            a.push(b.top());
            b.pop();
        }
        return k;
    }
    
    int peek() {
        while(a.empty()==0){
            b.push(a.top());
            a.pop();
        }
        int k=b.top();
        while(b.empty()==0){
            a.push(b.top());
            b.pop();
        }
        return k;
    }
    
    bool empty() {
        if(a.size()==0)
            return 1;
        return 0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */