#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long need = b + a * 100, give = d + c * 100;
    cout << (give - need) / 100 << " " << (give - need) % 100;
}