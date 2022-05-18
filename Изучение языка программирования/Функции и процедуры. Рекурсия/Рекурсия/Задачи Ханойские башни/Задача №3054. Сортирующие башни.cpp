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

void hanoi(int n, int a, int b, int c) {
    if (n == 0) return;

    if (n % 2) {
        move(n - 1, a, b, c);
        std::cout << n << " " << a << " " << b << endl;
        move(n - 1, c, b, a);
    }
    else {
        move(n - 1, a, c, b);
        std::cout << n << " " << a << " " << c << endl;
        move(n - 1, b, c, a);
    }

    hanoi(n - 1, a, b, c);
}

int main() {
    int n;
    cin >> n;
    hanoi(n, 1, 2, 3);
}