#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main() {
    long long k, n;
    cin >> k >> n;
    cout << (n - 1) / k + 1 << " " << (n - 1) % k + 1;
}