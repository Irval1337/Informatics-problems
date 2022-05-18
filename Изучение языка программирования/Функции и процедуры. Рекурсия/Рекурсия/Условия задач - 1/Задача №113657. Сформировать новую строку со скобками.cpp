#include <iostream>

using namespace std;

void f() {
    char c;
    c = cin.get();
    if (c == '\n')
        return;
    cout << c;
    f();
    cout << (c == '(' ? ')' : c);
}

int main() {
    
    f();
    return 0;
}