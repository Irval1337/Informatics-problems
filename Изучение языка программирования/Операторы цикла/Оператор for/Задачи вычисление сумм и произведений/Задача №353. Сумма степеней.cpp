#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long long n;
    cin >> n;
    unsigned long long sum = 0;
    for (int i = 0; i <= n; i++) sum += pow(2, i);
    cout << sum;
}