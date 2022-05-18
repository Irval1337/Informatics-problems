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

    int count = 0;
    int prev = mas[0];

    for (int i = 1; i < N; i++) {
        count += mas[i] > 0 == prev > 0;
        prev = mas[i];
    }

    if (count == 0) cout << "NO";
    else cout << "YES";
}