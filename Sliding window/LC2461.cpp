#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int l = 0;
        unordered_map<int, int> freq;
        long long sum = 0;
        long long maxSum = 0;
        for (int r = 0; r < nums.size(); r++) {
            freq[nums[r]]++;
            sum += nums[r];
            while (freq[nums[r]] > 1 || r - l + 1 > k) {
                freq[nums[l]]--;
                sum = sum - nums[l];
                l++;
            }
            if (r - l + 1 == k) {
                maxSum = max(maxSum, sum);
            }
        }
        return maxSum;
    }
};