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

    for (int i = 1; i < N - 1; i++) {
        count += mas[i - 1] < mas[i] && mas[i] > mas[i + 1];
    }

    cout << count;
}