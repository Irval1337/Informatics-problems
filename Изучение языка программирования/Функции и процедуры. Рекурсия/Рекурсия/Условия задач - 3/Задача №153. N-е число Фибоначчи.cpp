#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

long long phi(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return phi(n - 1) + phi(n - 2);
}

int main() {
    int n;
    cin >> n;

    cout << phi(n);
}