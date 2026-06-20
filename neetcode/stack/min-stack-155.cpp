class MinStack {
public:
    stack<pair<int,int>> min_stack;
    MinStack() {
    }
    
    void push(int val) {
        if(min_stack.empty())
        {
            min_stack.push({val,val});
        }
        else {
            pair<int,int> p= min_stack.top();
            min_stack.push({val,min(p.second,val)});
        }
    }
    
    void pop() {
        min_stack.pop();
    }
    
    int top() {
        pair<int,int> p= min_stack.top();
        return p.first;
    }
    
    int getMin() {
        pair<int,int> p = min_stack.top();
        return p.second;
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