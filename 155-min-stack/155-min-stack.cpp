class MinStack {
public:
    stack<int> s1,s2;
    MinStack() {
        
    }
    
    void push(int val) {
        s1.push(val);
        if(s2.empty() || val<=s2.top())
            s2.push(val);
    }
    
    void pop() {
        if(s1.empty() || s1.top()==s2.top()){
            s2.pop();
        }
        s1.pop();
    }
    
    int top() {
        int p=s1.top();
        return p;
    }
    
    int getMin() {
        int r=s2.top();
        return r;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */