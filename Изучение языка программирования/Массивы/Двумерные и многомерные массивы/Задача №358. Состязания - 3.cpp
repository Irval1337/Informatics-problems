#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    long long max_res = -1;
    long long max_sum = -1;
    int ind = -1;

    for (int i = 0; i < N; i++) {
        long long sum = 0;
        long long res = -1;

        for (int j = 0; j < M; j++) {
            long long num;
            cin >> num;

            if (num > res)
                res = num;

            sum += num;
        }

        if (res > max_res || res == max_res && sum > max_sum) {
            max_res = res;
            ind = i;
            max_sum = sum;
        }
    }

    cout << ind;
}