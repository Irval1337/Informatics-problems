#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long long a;
    cin >> a;
    if (a > 0) cout << "1";
    else if (a < 0) cout << "-1";
    else cout << "0";
}