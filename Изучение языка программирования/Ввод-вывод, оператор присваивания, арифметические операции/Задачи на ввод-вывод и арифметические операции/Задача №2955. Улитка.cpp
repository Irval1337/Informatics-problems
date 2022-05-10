#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long long h, a, b;
    cin >> h >> a >> b;

    cout << 1 + (h - a) / (a - b) + ((h - a) % (a - b) + a - b - 1) / (a - b);
}