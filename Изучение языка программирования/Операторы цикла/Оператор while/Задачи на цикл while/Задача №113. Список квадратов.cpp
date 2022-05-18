#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    long long N;
    cin >> N;

    long long num = 1;

    while (num * num <= N) {
        cout << num * num << endl;
        num++;
    }
}