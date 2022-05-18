#include <iostream>
#include <string>

void f(bool isFirst = true) {
    char c;
    c = std::cin.get();
    if (c == '\n')
        return;
    std::cout << (isFirst ? "" : "*") << c;
    f(false);
}

int main() {
    f();
}