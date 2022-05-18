#include <iostream>
#include <string>

bool f(int n) {
    if (n < 0)
        return false;
    if (n == 1)
        return true;
    return f(n - 5) || f(n - 3);
}

int main() {
    int n;
    std::cin >> n;
    std::cout << (f(n) ? "YES" : "NO");
}