#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    long long max_res = -1;
    int ind = -1;
    int count = 0;

    for (int i = 0; i < N; i++) {
        long long res = -1;

        for (int j = 0; j < M; j++) {
            long long num;
            cin >> num;

            if (num > res)
                res = num;
        }

        if (res > max_res) {
            max_res = res;
            ind = i;
            count = 1;
        }
        else if (res == max_res) count++;
    }

    std::cout << count;
}