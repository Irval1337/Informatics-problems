#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long long x, y, p;
    cin >> x >> p >> y;

    y *= 100;
    x *= 100;
    long long count = 0;
    double mult = (double)p / 100;
    while (x < y) {
        x += x * mult;
        count++;
    }

    cout << count;
}