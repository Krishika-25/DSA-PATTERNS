#include<bits/stdc++.h>
using namespace std;
class MinStack {
public:
    stack<int> st;
    stack<int> ans;

    MinStack() {}

    void push(int val) {
        st.push(val);
        if (ans.empty() || val <= ans.top())
            ans.push(val);
    }

    void pop() {
        if (st.top() == ans.top())
            ans.pop();
        st.pop();
    }

    int top() { return st.top(); }

    int getMin() { return ans.top(); }
};

