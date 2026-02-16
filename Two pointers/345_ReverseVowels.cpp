#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isVowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
               c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
    }

    string reverseVowels(string s) {
        int i = 0, j = s.length() - 1;

        while(i < j){
            while(i < j && !isVowel(s[i])) i++;
            while(i < j && !isVowel(s[j])) j--;

            if(i < j){
                swap(s[i], s[j]);
                i++; j--;
            }
        }

        return s;
    }
};

int main() {
    string s = "hello";
    Solution sol;
    string ans = sol.reverseVowels(s);

    cout << "Reversed Vowels: " << ans << endl;
    return 0;
}
