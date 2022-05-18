#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main() {
    long long n;
    cin >> n;
    cout << "It is " << n / 30 << " hours " << n * 2 % 60 << " minutes.";
}