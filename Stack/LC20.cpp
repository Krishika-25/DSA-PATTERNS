#include<bits/stdc++.h>
using namespace std;
class SolutionValidParentheses {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty()) return false;
                if ((c == ')' && st.top() == '(') ||
                    (c == '}' && st.top() == '{') ||
                    (c == ']' && st.top() == '[')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};
int main() {
    SolutionValidParentheses sol1;
    string s = "({[]})";
    cout << "Valid Parentheses: " << (sol1.isValid(s) ? "true" : "false") << endl;
    return 0;
}