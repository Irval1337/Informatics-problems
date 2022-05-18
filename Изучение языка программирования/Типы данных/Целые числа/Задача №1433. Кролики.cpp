#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    cout << m / n + (m % n != 0);
}