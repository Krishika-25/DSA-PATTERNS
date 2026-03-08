#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isvowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int maxVowels(string s, int k) {
        int counter = 0;
        for (int i = 0; i < k; i++) {
            if(isvowel(s[i])){
                counter++;
            }
        }
        int maxCounter = counter;
        for (int i = k; i < s.size(); i++) {
            if (isvowel(s[i])) {
                counter++;
            }
            if (isvowel(s[i - k])) {
                counter--;
            }
            maxCounter = max(counter, maxCounter);
        }
        return maxCounter;
    }
};