#include <bits/stdc++.h>
using namespace std;

class MovingAverage {
public:
    int k;
    double sum;
    deque<int> q;

    MovingAverage(int size) {
        k = size;
        sum = 0;
    }
    
    double add(int val) {
        q.push_back(val);
        sum += val;

        if (q.size() > k) {
            sum -= q.front();
            q.pop_front();
        }

        return sum / q.size();
    }
};

int main() {
    MovingAverage m(3);

    cout << m.add(1) << endl;
    cout << m.add(10) << endl;
    cout << m.add(3) << endl;
    cout << m.add(5) << endl;

    return 0;
}