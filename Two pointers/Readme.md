# Two-Pointer Pattern - Day 1

A quick guide to understanding the **Two-Pointer Technique**, a common pattern in array and string problems.  

---

## Table of Contents

- [Universal Template](#universal-template)
- [Key Notes](#key-notes)
- [Common Variations](#common-variations)
- [Example Problems](#example-problems)
- [Tips & Tricks](#tips--tricks)

---

## Universal Template

The two-pointer technique usually involves initializing **two pointers** (often `i` and `j`) at different positions and moving them based on conditions.  

```cpp
int i = 0, j = n - 1;

while (i < j) {
    while (i < j && !condition_i) i++;
    while (i < j && !condition_j) j--;

    if (i < j) {
        // process or swap elements
        i++;
        j--;
    }
}
Key Notes
Move pointers until the condition is satisfied.

Perform swap or calculation only after both pointers meet the condition.

Stop when pointers cross (i >= j).

Always check i < j in inner loops to avoid out-of-bounds errors.

Common Variations
Two pointers from opposite ends

Useful in sorted arrays for sums, palindrome checks, etc.

Two pointers from the same start

Often used in sliding window problems or contiguous subarray checks.

Fast & Slow pointers

One pointer moves faster than the other, e.g., detecting cycles in linked lists.

Example Problems
1. Check Palindrome (Alphanumeric Only)
bool isPalindrome(string s) {
    int i = 0, j = s.size() - 1;

    while (i < j) {
        while (i < j && !isalnum(s[i])) i++;
        while (i < j && !isalnum(s[j])) j--;

        if (i < j) {
            if (tolower(s[i]) != tolower(s[j])) return false;
            i++; j--;
        }
    }
    return true;
}
2. Two Sum II (Sorted Array)
vector<int> twoSum(vector<int>& numbers, int target) {
    int i = 0, j = numbers.size() - 1;

    while (i < j) {
        int sum = numbers[i] + numbers[j];
        if (sum == target) return {i + 1, j + 1};
        else if (sum < target) i++;
        else j--;
    }
    return {};
}
Tips & Tricks
Always clarify the pointer movement: when to increment or decrement.

Think in terms of conditions rather than absolute indices.

For arrays with duplicates, check whether skipping duplicates is needed.

Visualizing the pointers on paper or using a debugger helps avoid off-by-one errors.

