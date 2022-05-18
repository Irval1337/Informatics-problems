#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> mas;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        mas.push_back(num);
    }

    reverse(mas.begin(), mas.end());
    reverse(mas.begin() + 1, mas.end());

    for (auto el : mas) cout << el << " ";
}