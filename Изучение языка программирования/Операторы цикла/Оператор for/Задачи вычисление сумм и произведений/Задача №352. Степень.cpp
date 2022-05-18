#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long num = 1;
    for (int i = 1; i <= n; i++) num *= 2;
    cout << num;
}