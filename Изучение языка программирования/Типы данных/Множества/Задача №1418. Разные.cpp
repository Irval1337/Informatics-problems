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
        int num;
        cin >> num;
        _set.insert(num);
    }

    cout << _set.size();
}