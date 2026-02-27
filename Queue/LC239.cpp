#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            if (!dq.empty() && dq.front() < i - k + 1)
                dq.pop_front();

            while (!dq.empty() && nums[dq.back()] < nums[i])
                dq.pop_back();

            dq.push_back(i);

            if (i >= k - 1)
                ans.push_back(nums[dq.front()]);
        }

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, 1, 2, 0, 5};
    int k = 3;
    
    vector<int> result = sol.maxSlidingWindow(nums, k);

    for (int x : result)
        cout << x << " ";
    cout << endl;

    return 0;
}