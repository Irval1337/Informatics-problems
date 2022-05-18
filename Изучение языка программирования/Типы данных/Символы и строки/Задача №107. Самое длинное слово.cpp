#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    string max = "", curr = "";
    bool isSpace = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
            if (isSpace)
                isSpace = false;
            curr += s[i];
        }
        else {
            isSpace = true;
            if (curr.size() > max.size()) max = curr;
            curr = "";
        }
    }

    if (curr.size() > max.size()) max = curr;
    cout << max << endl;
    cout << max.size();
}