#include <iostream>
#include <string>

using namespace std;

bool isPol(const string s)
{
    return s == string(s.crbegin(), s.crend());
}

void Correct(string& s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ' && (i == 0 || s[i - 1] == ' ')) {
            s.erase(i, 1);
            i--;
        }
    }
}

int main() {
    string s, ans;
    getline(cin, s);
    Correct(s);

    if (isPol(s)) {
        cout << s;
        return 0;
    }

    for (int i = 0; i < s.size(); i++) {
        for (int j = i; j < s.size(); j++) {
            if (isPol(s.substr(i, j - i + 1))) {
                if (ans.length() < s.substr(i, j - i + 1).length())
                    ans = s.substr(i, j - i + 1);
            }
        }
    }

    cout << ans;
}