#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int maxarea = 0;
        int width,index=0;
        int area=0;
        for (int i = 0; i < heights.size(); i++) {
            if (st.empty() || heights[i] >= heights[st.top()]) {
                st.push(i);
            } else {
                while (!st.empty() && heights[i] < heights[st.top()]) {
                    index = st.top();
                    st.pop();
                     width = i - (st.empty() ? 0 : st.top() + 1);
                    area = heights[index] * width;
                    maxarea = max(area, maxarea);
                }
                st.push(i);
            }
        }
        while (!st.empty()) {
            index = st.top();
            st.pop();
            width = heights.size() - (st.empty() ? 0 : st.top() + 1);
            area = heights[index] * width;
            maxarea = max(area, maxarea);
        }
        return maxarea;
    }
};