#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long long a;
    cin >> a;
    if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0) cout << "YES";
    else cout << "NO";
}