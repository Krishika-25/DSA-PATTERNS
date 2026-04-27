#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0, index = 0;
        
        vector<int> temp(m);   
        
        for(int k = 0; k < m; k++) {
            temp[k] = nums1[k];
        }

        while (i < m && j < n) {
            if (temp[i] <= nums2[j]) {
                nums1[index] = temp[i];
                i++;
            } else {
                nums1[index] = nums2[j];
                j++;
            }
            index++;
        }

        while (i < m) {
            nums1[index] = temp[i];
            i++;
            index++;
        }

        while (j < n) {
            nums1[index] = nums2[j];
            j++;
            index++;
        }
    }
};