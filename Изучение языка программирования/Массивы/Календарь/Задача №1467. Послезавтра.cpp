#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int day, month, year;
    cin >> day >> month >> year;

    vector<int> months = { 31, 28 + (year % 4 == 0 && year % 100 != 0 || year % 400 == 0), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    day += 2;

    if (day > months[month - 1]) {
        day -= months[month - 1];
        month++;
    }

    if (month > 12) {
        month = 1;
        year++;
    }

    cout << day << " " << month << " " << year;
}