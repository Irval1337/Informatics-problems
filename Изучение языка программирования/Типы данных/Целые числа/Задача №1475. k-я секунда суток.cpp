#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main() {
    long long n;
    cin >> n;
    cout << "It is " << n / 3600 << " hours " << n % 3600 / 60 << " minutes.";
}