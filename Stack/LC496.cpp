#include<bits/stdc++.h>
using namespace std;
class SolutionNextGreater {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int, int> nextGreater;
        vector<int> ans;

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
int main(){
    SolutionNextGreater sol2;
    vector<int> nums1 = {2,1};
    vector<int> nums2 = {1,2,3};
    vector<int> res = sol2.nextGreaterElement(nums1, nums2);
    cout << "Next Greater Element: ";
    for (int x : res) cout << x << " ";
    cout << endl;

    return 0;
}