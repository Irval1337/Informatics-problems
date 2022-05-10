#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

bool checker(long long a, long long b, long long c, long long d, long long x) {
    return a * pow(x, 3) + b * pow(x, 2) + c * x + d == 0;
}

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    for (int i = 1000; i >= 0; i--) {
        if (checker(a, b, c, d, i)) cout << i << " ";
    }
}