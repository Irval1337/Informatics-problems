#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    long long max_sum = -1;
    pair<int, int> ind = { -1, -1 };

    for (int i = 0; i < N; i++) {
        long long sum = -1;
        int curr_ind = -1;
        for (int j = 0; j < M; j++) {
            long long num;
            cin >> num;

            if (num > sum) {
                sum = num;
                curr_ind = j;
            }
        }

        if (sum > max_sum) {
            max_sum = sum;
            ind = { i, curr_ind };
        }
    }

    cout << max_sum << endl << ind.first << " " << ind.second;
}