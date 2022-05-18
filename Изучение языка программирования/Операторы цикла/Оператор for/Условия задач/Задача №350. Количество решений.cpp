#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

bool checker(long long a, long long b, long long c, long long d, long long e, long long x) {
    if (x == e) return false;
    return a * pow(x, 3) + b * pow(x, 2) + c * x + d == 0;
}

int main() {
    long long a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    long long count = 0;
    for (int i = 0; i <= 1000; i++) {
        count += checker(a, b, c, d, e, i);
    }
    cout << count;
}