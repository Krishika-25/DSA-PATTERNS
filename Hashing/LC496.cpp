#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        vector<int> ans;
        unordered_map<int, int> nextGreater;
        for (int i = 0; i < nums2.size(); i++) {
            while (!st.empty() && nums2[i] > st.top()) {
                nextGreater[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        while (!st.empty()) {
            nextGreater[st.top()] = -1;
            st.pop();
        }
        for (int i = 0; i < nums1.size(); i++) {
            ans.push_back(nextGreater[nums1[i]]);
        }
        return ans;
    }
};