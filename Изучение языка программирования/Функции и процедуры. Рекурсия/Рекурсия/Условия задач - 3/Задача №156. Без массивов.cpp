#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

void f(int N) {
    if (N == 0) return;

    int num;
    cin >> num;
    f(N - 1);
    cout << num << " ";
}

int main() {
    int N;
    cin >> N;

    f(N);
}