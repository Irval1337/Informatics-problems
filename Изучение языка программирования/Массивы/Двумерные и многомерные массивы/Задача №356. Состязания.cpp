#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    long long max_sum = -1;
    int ind = -1;

    for (int i = 0; i < N; i++) {
        long long sum = 0;
        for (int j = 0; j < M; j++) {
            long long num;
            cin >> num;
            sum += num;
        }

        if (sum > max_sum) {
            max_sum = sum;
            ind = i;
        }
    }

    cout << max_sum << endl << ind;
}