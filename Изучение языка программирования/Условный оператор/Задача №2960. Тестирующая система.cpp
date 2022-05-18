#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    if (a == 1 && b == 1) cout << "YES";
    else if (a != 1 && b != 1) cout << "YES";
    else cout << "NO";
}