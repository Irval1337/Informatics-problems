#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <string>
#include <set>
#include <iterator>
#include <sstream>

using namespace std;

void split(const std::string& s, char delim, vector<int>& elems) {
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        elems.push_back(atoi(item.c_str()));
    }
}

int main() {
    string s;
    getline(cin, s);

    vector<int> sequence;
    set<int> _set;

    split(s, ' ', sequence);

    for (auto element : sequence) {
        if (_set.find(element) == _set.end()) cout << "NO" << endl;
        else cout << "YES" << endl;
        _set.insert(element);
    }
}