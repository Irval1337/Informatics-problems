#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <string>
#include <set>
#include <iterator>
#include <sstream>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if (abs(a + b - c) <= 1e-7) cout << "YES";
    else cout << "NO";
}