class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> stackValue;
    stack<int> stackMin;
    MinStack() {

    }
    
    void push(int x) {
        stackValue.push(x);
        if (stackMin.empty() || stackMin.top() >= x)
            stackMin.push(x);
    }
    
    void pop() {
        if (stackMin.top() == stackValue.top()) stackMin.pop();
        stackValue.pop();
    }
    
    int top() {
        return stackValue.top();
    }
    
    int min() {
        return stackMin.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */