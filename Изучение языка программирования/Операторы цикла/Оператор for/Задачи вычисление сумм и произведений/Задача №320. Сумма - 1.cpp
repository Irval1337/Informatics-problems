#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i / i;
    }
    cout << sum;
}