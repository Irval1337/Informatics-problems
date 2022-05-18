#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

long long min(long long a, long long b, long long c, long long d) {
    return std::min(std::min(a, b), std::min(c, d));
}

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << min(a, b, c, d);
}