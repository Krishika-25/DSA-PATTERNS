#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int i = 0;
    int j = nums.size() - 1;

    while (i <= j) {
        int mid = i + (j - i) / 2;

        if (nums[mid] == target)
            return mid;

        if (nums[i] <= nums[mid]) {  
            if (target >= nums[i] && target < nums[mid])
                j = mid - 1;
            else
                i = mid + 1;
        } 
        else {  
            if (target > nums[mid] && target <= nums[j])
                i = mid + 1;
            else
                j = mid - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;

    cout << search(nums, target);

    return 0;
}