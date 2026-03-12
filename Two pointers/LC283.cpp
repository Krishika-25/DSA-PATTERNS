#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int k = 0; // index to place next non-zero element
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                nums[k++] = nums[i];
            }
        }
        // Fill remaining with zeros
        while (k < nums.size())
        {
            nums[k++] = 0;
        }
    }
};
