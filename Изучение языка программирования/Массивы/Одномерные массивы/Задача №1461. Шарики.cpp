#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N, first_N;
    cin >> N;
    first_N = N;
    vector<long long> mas;
    for (int i = 0; i < N; i++) {
        long long num;
        cin >> num;
        mas.push_back(num);
    }

    if (N == 0) return 0;

    while (true) {
        int prev = mas[0];
        int prev_count = 1;
        int start_index = 0;

        for (int i = 1; i < N; i++) {
            if (mas[i] == prev) prev_count++;
            else {
                if (prev_count >= 3) break;
                start_index = i;
                prev_count = 1;
            }
            prev = mas[i];
        }

        if (prev_count < 3) break;

        prev = mas[start_index];
        while (start_index < N && mas[start_index] == prev) {
            mas.erase(mas.begin() + start_index);
            N = mas.size();
        }
    }

    cout << first_N - mas.size();
}