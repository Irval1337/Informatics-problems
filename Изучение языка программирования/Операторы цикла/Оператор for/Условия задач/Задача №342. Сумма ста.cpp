#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long long sum = 0;
    for (int i = 0; i < 100; i++) {
        long long num;
        cin >> num;
        sum += num;
    }

    cout << sum;
}