#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long double a, b, c;
    cin >> a >> b >> c;

    long double D = b * b - 4 * a * c;
    if (D < 0) return 0;
    if (D == 0) cout << -b / 2 / a;
    if (D > 0)
        cout << (-b + sqrt(D)) / 2 / a << " " << (-b - sqrt(D)) / 2 / a;
}