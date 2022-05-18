#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int num;
    long long max_count = 0;
    long long current = -1;
    long long current_count = 0;
    while (cin >> num, num != 0) {
        if (current != num) {
            current = num;
            max_count = max(max_count, current_count);
            current_count = 1;
        }
        else current_count++;
    }
    
    cout << max(max_count, current_count);
}