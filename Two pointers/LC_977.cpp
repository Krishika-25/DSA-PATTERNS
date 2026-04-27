#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> a;
        vector<int> b;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0) {
                a.push_back(nums[i]);
            } else {
                b.push_back(nums[i]);
            }
        }
        for (int i = 0; i < a.size(); i++) a[i] = a[i] * a[i];
        for (int i = 0; i < b.size(); i++) b[i] = b[i] * b[i];
        reverse(a.begin(), a.end());
        int i = 0, j = 0, index = 0;
        while (i < a.size() && j < b.size()) {
            if (a[i] <= b[j]) {
                nums[index] = a[i];
                i++;
            } else {
                nums[index] = b[j];
                j++;
            }
            index++;
        }
        while (i < a.size()) {
            nums[index] = a[i];
            i++;
            index++;
        }

        while (j < b.size()) {
            nums[index] = b[j];
            j++;
            index++;
        }
        return nums;
    }
};