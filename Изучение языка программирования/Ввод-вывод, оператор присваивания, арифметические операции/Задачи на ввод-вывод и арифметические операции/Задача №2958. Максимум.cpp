#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

long long _abs(long long a) {
    return a * (a % 2 + (a + 1) % 2);
}

int main() {
    long long a, b;
    cin >> a >> b;
    cout << (a + b + _abs(a - b)) / 2;
}