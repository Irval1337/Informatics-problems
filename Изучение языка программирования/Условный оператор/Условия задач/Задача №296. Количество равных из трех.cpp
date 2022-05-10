#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c) cout << 3;
    else if (a != b && b != c && a != c) cout << 0;
    else cout << 2;
}