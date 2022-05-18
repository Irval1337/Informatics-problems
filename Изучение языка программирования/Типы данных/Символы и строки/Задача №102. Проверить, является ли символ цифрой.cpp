#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main() {
    char c;
    c = cin.get();
    if (c >= '0' && c <= '9') cout << "yes";
    else cout << "no";
}