#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

bool Xor (bool a, bool b) {
    return !a && b || a && !b;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << Xor(a, b);
}