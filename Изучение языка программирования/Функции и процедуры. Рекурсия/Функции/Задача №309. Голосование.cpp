#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

bool Election(bool x, bool y, bool z) {
    int _true = 0, _false = 0;

    _true = x + y + z;
    _false = !x + !y + !z;

    return _true > _false;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << Election(a, b, c);
}