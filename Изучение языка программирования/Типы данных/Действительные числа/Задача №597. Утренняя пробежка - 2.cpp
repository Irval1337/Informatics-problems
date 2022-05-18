#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    double current_dist = x, sum = x;
    long long count = 1;
    while (abs(sum - y) > 1e-6 && sum < y) {
        current_dist *= 1.7;
        sum += current_dist;
        count++;
    }

    cout << count;
}