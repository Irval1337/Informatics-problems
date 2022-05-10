#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long double sum = 0;
    int _n = 0;
    for (int i = 1; i <= 2 * n + 1; i += 2, _n++) {
        sum += (double)pow(-1, _n) / i;
    }
    cout << 4 * sum;
}