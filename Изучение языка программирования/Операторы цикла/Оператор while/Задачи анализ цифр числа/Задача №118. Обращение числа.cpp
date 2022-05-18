#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long long num;
    cin >> num;
    
    long long new_num = 0;
    
    while (num > 0) {
        new_num *= 10;
        new_num += num % 10;
        num /= 10;
    }

    cout << new_num;
}