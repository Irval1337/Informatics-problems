#include <iostream> 
#include <string> 
#include <algorithm>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int ind, count = 0;
    while (ind = s.find("."), ind != s.npos) {
        int num = atoi(s.substr(0, ind).c_str());
        if (ind < 1 || ind > 3 || num < 0 || num > 255) {
            cout << 0;
            return 0;
        }
        if (count == 2 && s.substr(ind).length() == 1)
        {
            cout << 0;
            return 0;
        }
        count++;
        s = s.substr(ind + 1);
    }
    cout << 1;
}