#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    for (int i = 0; i < s2.size(); i++) {
        bool isOk = true;
        for (int j = 0; j < s1.size(); j++) {
            if (s2[i + j] != s1[j]) {
                isOk = false;
                break;
            }
        }
        
        if (isOk) {
            cout << "yes";
            return 0;
        }
    }

    cout << "no";
}