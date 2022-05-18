#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    vector<int> count(28, 0);

    for (int i = 0; i < s.size(); i++) {
        count[s[i] - 'a']++;
        if (count[s[i] - 'a'] == 2) {
            cout << s[i];
            return 0;
        }
    }
}