#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string temp = "";
        for (int i = 0; i < n; i++) {
            if (!(s[i] == ' ' && (temp.empty() || temp.back() == ' '))) {
                temp.push_back(s[i]);
            }
        }
        if (!temp.empty() && temp.back() == ' ')
            temp.pop_back();
        s = temp;
        reverse(s.begin(), s.end());
        int start = 0;
        for (int end = 0; end <= s.length(); end++) {
            if (end == s.length() || s[end] == ' ') {
                reverse(s.begin() + start, s.begin() + end);
                start = end + 1;
            }
        }
        return s;
    }
};