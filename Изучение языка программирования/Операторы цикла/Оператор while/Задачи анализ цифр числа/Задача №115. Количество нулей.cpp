#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long long num;
    cin >> num;
    long long count = 0;
    while (num > 0) {
        count += num % 10 == 0;
        num /= 10;
    }

    cout << count;
}