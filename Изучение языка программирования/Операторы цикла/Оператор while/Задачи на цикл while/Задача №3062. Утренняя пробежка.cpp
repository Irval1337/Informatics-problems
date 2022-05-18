#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    double current_dist = x;
    long long count = 1;
    while (current_dist < y) {
        current_dist *= 1.1;
        count++;
    }

    cout << count;
}