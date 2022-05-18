#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    string s;
    cin >> s;

    int day = atoi(s.substr(0, 2).c_str()), month = atoi(s.substr(2, 2).c_str()) - 2, year = atoi(s.substr(4).c_str());

    vector<int> months = { 31, 28 + (year % 4 == 0 && year % 100 != 0 || year % 400 == 0), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    long long count = day;

    while (month >= 0) count += months[month--];

    count += (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
    cout << count;
}