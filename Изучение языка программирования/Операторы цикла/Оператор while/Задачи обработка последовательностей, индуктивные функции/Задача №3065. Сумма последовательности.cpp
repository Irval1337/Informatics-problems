#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int num;
    long long c = 0;
    while (cin >> num, num != 0) c += num;
    
    cout << c;
}