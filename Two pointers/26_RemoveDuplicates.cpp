#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;

        int k = 0; 
        for(int i = 0; i < nums.size(); i++){
            if(i == nums.size() - 1 || nums[i] != nums[i+1]){
                nums[k++] = nums[i];
            }
        }
        return k;
    }
};

int main() {
    vector<int> nums = {1,1,2,2,3};
    Solution sol;
    int len = sol.removeDuplicates(nums);

    cout << "Length: " << len << endl;
    cout << "Array: ";
    for(int i=0; i<len; i++)
        cout << nums[i] << " ";
    cout << endl;
    return 0;
}
