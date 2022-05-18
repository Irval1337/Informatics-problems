#include <iostream>

using namespace std;

string str = "";
int sz = 0;

void input() {
    char c;
    c = cin.get();
    if (c == '\n')
        return;
    str += c;
    sz++;;
    input();
}

string f(string s, int _sz = sz) {
    if (_sz <= 2)
        return s;
    return s.substr(0, 1) + "(" + f(s.substr(1, _sz - 2), _sz - 2) + ")" + s.substr(_sz - 1, 1);
}

int main() {
    
    input();
    cout << f(str);
    return 0;
}