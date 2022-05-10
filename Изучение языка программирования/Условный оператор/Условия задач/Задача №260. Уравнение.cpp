#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    if (a == 0) {
        if (b == 0)
            cout << "INF";
        else
            cout << "NO";
    }
    else if (b % a == 0) cout << -b / a;
    else cout << "NO";
}