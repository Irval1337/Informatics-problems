#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> mas(N, vector<int>(M));

    for (int i = 0; i < N * M; i++) {
        int x = i % M, y = i / M;

        mas[y][x] = x * y;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) std::cout << mas[i][j] << " ";
        std::cout << endl;
    }
}