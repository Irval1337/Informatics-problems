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

    long long max_el = -1e12;

    for (auto el : mas) max_el = max(max_el, el);

    cout << max_el;
}