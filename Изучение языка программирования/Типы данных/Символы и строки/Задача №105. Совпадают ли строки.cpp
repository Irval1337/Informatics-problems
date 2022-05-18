#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

bool compare(string s1, string s2) {
    if (s1.size() != s2.size()) return false;

    for (int i = 0; i < s1.size(); i++)
        if (s1[i] != s2[i]) return false;

    return true;
}

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    cout << (compare(s1, s2) ? "yes" : "no");
}