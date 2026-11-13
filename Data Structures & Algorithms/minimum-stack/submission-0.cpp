class MinStack {
public:
    stack<int> st;
    stack<int> sm;
    MinStack() {
    }
    
    void push(int val) {
        if(sm.empty()) {
            sm.push(val);
        } else {
            sm.push(min(val, sm.top()));
        }
        st.push(val);
    }
    
    void pop() {
        st.pop();
        sm.pop();
    }
    
    int top() {
       return st.top();
    }
    
    int getMin() {
        return sm.top();
    }
};
