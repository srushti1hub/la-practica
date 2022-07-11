class MinStack {
public:
    stack<pair<int,int>> s;
    int minEle;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            s.push({val,val});
        }
        else{
            minEle = min(s.top().second,val);
            s.push({val,minEle});
        }
    }
    
    void pop() {
        if(s.empty()){
            return;
        }
        s.pop();
    }
    
    int top() {
        if(s.empty()){
            return -1;
        }
        return s.top().first;
    }
    
    int getMin() {
        if(s.empty()){
            return -1;
        }
        return s.top().second;
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
