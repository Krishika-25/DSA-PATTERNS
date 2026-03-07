#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(string s) {
        int count1 = 0; 
        int count2 = 0; 
        int n = s.size();
        
        for (int i = 0; i < n; i++) {
            if (s[i] != (i % 2 == 0 ? '0' : '1')) count1++;
            if (s[i] != (i % 2 == 0 ? '1' : '0')) count2++;
        }
        
        return min(count1, count2);
    }
};