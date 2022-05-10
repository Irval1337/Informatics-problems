#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    if (a % 2 || b % 2 || c % 2) {
        if (a % 2 == 0 || b % 2 == 0 || c % 2 == 0) cout << "YES";
        else cout << "NO";
    }
    else cout << "NO";
}