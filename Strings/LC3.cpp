#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool> arr(128, false);
        int maxlen = 0, l = 0, r = 0;
        while (r < s.size()) {
            if (!arr[s[r]]) {
                arr[s[r]] = true;
                maxlen = max(maxlen, r - l + 1);
                r++;
            } else {
                arr[s[l]] = false;
                l++;
            }
        }
        return maxlen;
    }
};