#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

void f(int n);
void g(int n);

void g(int n) {
    if (n <= 0) return;
    if (n == 1) {
        cout << "-1 ";
        return;
    }
    if (n == 2) {
        cout << "-2 -1 ";
        return;
    }

    g(n - 2);
    cout << -n << " ";
    f(n - 2);
    g(n - 1);
}

void f(int n) {
    if (n <= 0) return;
    if (n == 1) {
        cout << "1 ";
        return;
    }
    if (n == 2) {
        cout << "1 2 ";
        return;
    }

    f(n - 1);
    g(n - 2);
    cout << n << " ";
    f(n - 2);
}

int main() {
    int n;
    cin >> n;
    f(n);
}