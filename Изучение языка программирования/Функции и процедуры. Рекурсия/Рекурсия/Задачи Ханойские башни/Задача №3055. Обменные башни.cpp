#include <iostream>
#include <string>

void hanoi(int n, int a, int b, int c) {
    if (n <= 0)
        return;
    if (n == 1) {
        std::cout << n << " " << a << " " << c << std::endl;
        return;
    }

    hanoi(n - 1, a, b, c);
    hanoi(n - 2, c, a, b);
    std::cout << 0 << " " << a << " " << c << std::endl;
    hanoi(n - 2, b, c, a);
    hanoi(n - 1, a, b, c);
}

int main() {
    int n;
    std::cin >> n;
    hanoi(n, 1, 2, 3);
}