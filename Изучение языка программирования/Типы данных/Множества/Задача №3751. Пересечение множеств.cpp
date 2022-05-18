#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <string>
#include <set>
#include <iterator>
#include <sstream>

using namespace std;

void split(const std::string& s, char delim, set<int>& elems) {
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        elems.insert(atoi(item.c_str()));
    }
}

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    set<int> first, second;
    vector<int> v_intersection;

    split(s1, ' ', first);
    split(s2, ' ', second);

    set_intersection(first.begin(), first.end(), second.begin(), second.end(), back_inserter(v_intersection));

    sort(v_intersection.begin(), v_intersection.end());

    for (auto el : v_intersection) cout << el << " ";
}