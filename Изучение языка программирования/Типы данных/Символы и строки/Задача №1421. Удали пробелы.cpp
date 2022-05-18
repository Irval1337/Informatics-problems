#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main() {
    string s, new_s = "";

    getline(cin, s);

    char prev = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ' || prev != ' ') new_s += s[i];
        prev = s[i];
    }

    cout << new_s;
}