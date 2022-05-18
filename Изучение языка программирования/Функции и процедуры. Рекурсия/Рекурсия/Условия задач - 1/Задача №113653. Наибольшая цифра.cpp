#include <iostream>
#include <string>

short _max = 0;
void f() {
    char c;
    c = std::cin.get();
    if (c == '\n') return;
    if (_max < c - '0')
        _max = c - '0';
    f();
}

int main() {
    f();
    std::cout << _max;
}