#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long long n;
    cin >> n;
    double sum = 1;
    double long num = 1;
    for (int i = 1; i <= n; i++) {
        num /= i;
        sum += num;
    }
    cout.precision(6);
    cout << sum;
}