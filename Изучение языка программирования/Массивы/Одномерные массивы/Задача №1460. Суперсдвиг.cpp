#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> mas;
    for (int i = 0; i < N; i++) {
        long long num;
        cin >> num;
        mas.push_back(num);
    }

    long long K;
    cin >> K;
    K %= N;

    reverse(mas.begin(), mas.end());

    if (K > 0) {
        reverse(mas.begin(), mas.begin() + K);
        reverse(mas.begin() + K, mas.end());
    }
    else {
        reverse(mas.begin(), mas.begin() + N + K);
        reverse(mas.end() + K, mas.end());
    }

    for (auto el : mas) cout << el << " ";
}