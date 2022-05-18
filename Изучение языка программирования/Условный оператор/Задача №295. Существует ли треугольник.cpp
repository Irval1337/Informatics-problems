#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    if (a < b + c && b < a + c && c < a + b) cout << "YES";
    else cout << "NO";
}