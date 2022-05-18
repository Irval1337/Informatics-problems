#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> months = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    int sum = 0;
    int month = 0;

    while (sum + months[month] < N)
        sum += months[month++];

    cout << N - sum << " " << month + 1;
}