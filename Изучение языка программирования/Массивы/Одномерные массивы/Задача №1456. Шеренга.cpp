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

    long long need;
    cin >> need;

    int index = 0;

    while (mas[index] >= need)
        index++;

    cout << index + 1;
}