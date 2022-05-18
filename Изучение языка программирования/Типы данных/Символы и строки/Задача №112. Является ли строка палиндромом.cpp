#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main() {
    string s, s_new;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') s_new += s[i];
    }

    for (int i = 0; i < s_new.size() / 2; i++) {
        if (s_new[i] != s_new[s_new.size() - i - 1]) {
            cout << "no";
            return 0;
        }
    }

    cout << "yes";
}