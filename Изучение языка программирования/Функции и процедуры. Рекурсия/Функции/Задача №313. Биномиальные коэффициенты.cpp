#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

long long bin(int n, int k) {
    if (k == 0) return 1;
    if (k == n) return 1;
    return bin(n - 1, k - 1) + bin(n - 1, k);
}

int main() {
    int n, k;
    cin >> n >> k;

    cout << bin(n, k);
}