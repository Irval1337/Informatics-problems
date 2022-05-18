#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <unordered_map>
#include <list>

using namespace std;

void move(int n, int a, int b, int c) {
    if (n == 0) return;
    move(n - 1, a, c, b);
    std::cout << n << " " << a << " " << c << endl;
    move(n - 1, b, a, c);
}

int main() {
    int n;
    cin >> n;
    move(n, 1, 2, 3);
}