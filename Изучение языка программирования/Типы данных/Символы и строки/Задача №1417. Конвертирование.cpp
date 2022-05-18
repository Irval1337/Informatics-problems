#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int i, j;
    cin >> i >> j;
    i--, j--;

    while (i < j) {
        swap(s[i], s[j]);
        i++, j--;
    }

    cout << s;
}