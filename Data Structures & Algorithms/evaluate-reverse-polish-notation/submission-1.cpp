class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st; 
        for (auto& t : tokens){
            if (t != "+" && t != "-" && t != "*" && t != "/"){
                st.push(stoi(t));
            } else if (t == "+"){
                int temp = st.top();
                st.pop();
                temp += st.top();
                st.pop();
                st.push(temp);
            } else if (t == "-"){
                int temp = st.top();
                st.pop();
                temp = st.top() - temp;
                st.pop();
                st.push(temp);
            } else if (t == "*"){
                int temp = st.top();
                st.pop();
                temp *= st.top();
                st.pop();
                st.push(temp);
            } else if (t == "/"){
                int temp = st.top();
                st.pop();
                temp = st.top()/ temp;
                st.pop();
                st.push(temp);
            } 
        }
        return st.top();
    }
};
