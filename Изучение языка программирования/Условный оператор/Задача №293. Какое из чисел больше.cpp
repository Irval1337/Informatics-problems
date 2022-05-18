#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    if (a > b) cout << 1;
    else if (a < b) cout << 2;
    else cout << 0;
}