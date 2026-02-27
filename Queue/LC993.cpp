#include <bits/stdc++.h>
using namespace std;

class RecentCounter {
public:
    queue<int> timestamps;

    RecentCounter() {
    }

    int ping(int t) {
        timestamps.push(t);

        while (!timestamps.empty() && timestamps.front() < t - 3000) {
            timestamps.pop();
        }

        return timestamps.size();
    }
};