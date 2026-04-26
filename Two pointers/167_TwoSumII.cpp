#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size() - 1;
        while(i < j){
            int sum = numbers[i] + numbers[j];
            if(sum == target) return {i+1, j+1}; 
            else if(sum < target) i++;
            else j--;
        }
        return {};
    }
};

int main() {
    vector<int> numbers = {2,7,11,15};
    int target = 9;
    Solution sol;
    vector<int> ans = sol.twoSum(numbers, target);

    cout << "Indices: ";
    for(int x : ans)
        cout << x << " ";
    cout << endl;
    return 0;
}


// Two Sum II (Sorted Array) – Key Notes

// Approach: Two Pointers

// Use two pointers
// i = 0 (start)
// j = n - 1 (end)
// Since array is sorted
// If sum is small → move i++
// If sum is large → move j--

// Important Concept

// sum must be calculated inside the loop
// Because i and j change every iteration
// If you calculate sum outside , it will stay constant /Logic will break (wrong answer or infinite loop)

// Loop Condition

// Always use

// while (i < j)
// Do not use i <= j
// Reason: same element cannot be used twice