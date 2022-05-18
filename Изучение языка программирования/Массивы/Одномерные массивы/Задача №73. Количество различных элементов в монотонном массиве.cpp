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

    long long prev = mas[0];
    long long count = 1;

    for (int i = 1; i < N; i++) {
        count += mas[i] != prev;
        prev = mas[i];
    }

    cout << count;
}