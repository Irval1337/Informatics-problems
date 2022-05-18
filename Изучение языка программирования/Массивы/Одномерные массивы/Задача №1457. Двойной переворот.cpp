#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N, A, B, C, D;
    cin >> N >> A >> B >> C >> D;
    vector<long long> mas;
    for (int i = 0; i < N; i++)
        mas.push_back(i + 1);

    reverse(mas.begin() + A - 1, mas.begin() + B);
    reverse(mas.begin() + C - 1, mas.begin() + D);

    for (auto el : mas) cout << el << " ";
}