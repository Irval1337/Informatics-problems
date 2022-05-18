#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int x, n;
    cin >> x >> n;
    s = to_string(x);
    for (int i = 1; i < n; i++) {
        string tmp = "";
        start:
        int ind = 0;
        while (ind < s.size() && s[0] == s[++ind]);
        tmp = tmp + to_string(ind) + s[0];
        s = ind < s.size() ? s.substr(ind) : "";
        if (s.length() > 0)
            goto start;
        s = tmp;
    }
    cout << s;
}