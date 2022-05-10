#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long current_count = 0;
    for (int i = 1; i <= n && current_count < n; i++) {
        for (int j = 0; j < i && current_count < n; j++, current_count++)
            cout << i << " ";
    }
}