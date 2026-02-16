#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1;
        int maxArea = 0;

        while(i < j){
            int h = min(height[i], height[j]);
            int w = j - i;
            maxArea = max(maxArea, h * w);

            if(height[i] < height[j]) i++;
            else j--;
        }

        return maxArea;
    }
};

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    Solution sol;
    int ans = sol.maxArea(height);

    cout << "Max Area: " << ans << endl;
    return 0;
}
