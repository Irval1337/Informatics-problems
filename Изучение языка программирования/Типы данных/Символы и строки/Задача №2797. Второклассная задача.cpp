#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') count++;
        if (s[i] == '6') count++;
        if (s[i] == '8') count += 2;
        if (s[i] == '9') count++;
    }
    cout << count;
}