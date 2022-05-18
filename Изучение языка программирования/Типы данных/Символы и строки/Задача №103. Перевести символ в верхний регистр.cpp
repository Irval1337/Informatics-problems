#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main() {
    char c;
    c = cin.get();
    if (c >= 'a' && c <= 'z') c ^= 32;
    cout << c;
}