#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

double power(double a, int n) {
    double ans = 1;
    for (int i = 0; i < n; i++) ans *= a;

    return ans;
}

int main() {
    double a;
    int n;
    cin >> a >> n;

    cout << power(a, n);
}