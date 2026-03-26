#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double minimumAverage(std::vector<int>& nums) {
        std::vector<double> averages;
        while (nums.size() > 1) {
            int min = nums[0];
            int max = nums[0];
            int min_index = 0;
            int max_index = 0;
            for (int i = 1;i< nums.size();i++) {
                if (nums[i] > max) {
                    max = nums[i];
                    max_index = i;
                }
                if (nums[i] < min) {
                    min = nums[i];
                    min_index = i;
                }
            }
            double average = (min + max) / 2.0;
            averages.push_back(average);
            if (max_index > min_index) {
                nums.erase(nums.begin() + max_index);
                nums.erase(nums.begin() + min_index);
            } else {
                nums.erase(nums.begin() + min_index);
                nums.erase(nums.begin() + max_index);
            }
        }
        if (averages.empty()) return 0;
        std::sort(averages.begin(), averages.end());
        return averages[0];
    }
};
