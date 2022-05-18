#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    int count = 1;
    for (int i = 0; i < s.size(); i++) count += s[i] == ' ';

    cout << count;
}