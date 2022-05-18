#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

double power(double a, int n) {
    if (n == 0) return 1;
    if (n < 0) return 1.0 / power(a, -n);
    if (n == 1) return a;
    if (n % 2 == 0) {
        double b = power(a, n >> 1);
        return b * b;
    }
    return a * power(a, n - 1);
}

int main() {
    double num;
    long long n;
    cin >> num >> n;

    cout << power(num, n);
}