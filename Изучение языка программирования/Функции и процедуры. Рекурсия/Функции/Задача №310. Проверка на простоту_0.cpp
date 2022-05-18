#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

bool isPrime(long long num) {
    for (int i = 2; i < sqrt(num); i++) {
        if (num % i == 0) return false;
    }

    if (pow((long long)sqrt(num), 2) == num) return false;
    return true;
}

int main() {
    long long num;
    cin >> num;

    cout << (isPrime(num) ? "prime" : "composite");
}