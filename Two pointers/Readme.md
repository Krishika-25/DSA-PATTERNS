# Two-Pointer Pattern - Day 1

## Universal Template
```cpp
int i = 0, j = n - 1;
while(i < j){
    while(i < j && !condition_i) i++;
    while(i < j && !condition_j) j--;
    if(i < j){
        process/swap
        i++; j--;
    }
}
Key Notes
Move pointers until the condition is satisfied.

Swap or calculate only after both pointers meet the condition.

Stop when pointers cross (i >= j).

Always check i < j in inner loops to avoid out-of-bounds errors.

Problems Covered (Day 1)
LeetCode 26 – Remove Duplicates from Sorted Array

Pointer k tracks next unique element.

Compare nums[i] with nums[i+1] safely.

Example:

Input: [1,1,2]
Output: [1,2], length = 2
LeetCode 167 – Two Sum II (Input Array Sorted)

i = left, j = right.

Move the pointer of the smaller number.

Example:

Input: [2,7,11,15], target=9
Output: [1,2]
LeetCode 11 – Container With Most Water

i = left, j = right.

Width = j-i, height = min(height[i], height[j]).

Move pointer with smaller height.

Example:

Input: [1,8,6,2,5]
Output: 15
LeetCode 345 – Reverse Vowels of a String

i = left, j = right.

Skip non-vowels, swap vowels.

Example:

Input: "hello"
Output: "holle"