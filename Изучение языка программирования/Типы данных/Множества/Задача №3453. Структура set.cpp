#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <string>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> _set;

    for (int i = 0; i < n; i++) {
        string action;
        cin >> action;
        if (action == "ADD") {
            int num;
            cin >> num;
            _set.insert(num);
        }
        if (action == "COUNT") {
            cout << _set.size() << endl;
        }
        if (action == "PRESENT") {
            int num;
            cin >> num;
            cout << (_set.find(num) != _set.end() ? "YES" : "NO") << endl;
        }
    }
}