#include <iostream>
#include <string>

int count = 0;

void f() {
    char c;
    c = std::cin.get();
    if (c == '\n')
        return;
    if (c >= '0' && c <= '9')
        count++;
    f();
}

int main() {
    f();
    std::cout << count;
}