#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

long long sum(long long n) {
    if (n % 2)
        return (n + 1) / 2 * n;
    else
        return n / 2 * (n + 1);
}

int main() {
    long long n;
    cin >> n;
    if (n >= 1) cout << sum(n);
    else cout << -sum(-n) + 1;
}