#include <iostream>
#include <string>

void hanoi(int n, int a, int b, int c) {
    if (n == 0) return;
    if (n == 1) {
        std::cout << n << " " << a << " " << c << std::endl;
        return;
    }
    hanoi(n - 1, a, b, c);
    std::cout << n << " " << a << " " << b << std::endl;
    hanoi(n - 1, c, b, a);
    std::cout << n << " " << b << " " << c << std::endl;
    hanoi(n - 1, a, b, c);
}

int main() {
    int n;
    std::cin >> n;
    hanoi(n, 1, 2, 3);
}