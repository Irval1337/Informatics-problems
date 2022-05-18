#include <iostream>
#include <string>
#include <vector>

std::vector<int> A, B, C;

void hanoi(int n, int a, int b, int c) {
    if (n == 0)
        return;
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