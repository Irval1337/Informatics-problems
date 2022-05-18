#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long long num;
    cin >> num;
    long long sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    cout << sum;
}