#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

long long fact(long long n) {
    long long sum = 1;
    for (int i = 1; i <= n; i++) sum *= i;
    return sum;
}

int main() {
    long long n, k;
    cin >> n >> k;
    cout << fact(n) / fact(k) / fact(n - k);
}