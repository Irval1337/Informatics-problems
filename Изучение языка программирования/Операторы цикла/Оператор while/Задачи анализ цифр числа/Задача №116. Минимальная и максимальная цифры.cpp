#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long long num;
    cin >> num;
    long long min_num = 10, max_num = -1;
    while (num > 0) {
        min_num = min(num % 10, min_num);
        max_num = max(num % 10, max_num);
        num /= 10;
    }

    cout << min_num << " " << max_num;
}