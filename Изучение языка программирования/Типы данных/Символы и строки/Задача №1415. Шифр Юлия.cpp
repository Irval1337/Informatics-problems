#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;

    for (int i = 0; i < s.size(); i++) {
        s[i] -= k;
        if (s[i] < 'A') s[i] += 26;
    }

    cout << s;
}