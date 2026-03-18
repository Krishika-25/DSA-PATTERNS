#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& a, int target) {
    unordered_map<int, int> m;

    for (int i = 0; i < a.size(); i++) {
        int b = target - a[i];

        if (m.find(b) != m.end()) {
            return {m[b], i};
        }

        m[a[i]] = i;
    }

    return {};
}

int main() {
    vector<int> a = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = twoSum(a, target);

    cout << ans[0] << " " << ans[1];
}