#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> mas(N, vector<int>(M));

    int current_num = 0;

    for (int i = 0; i < M; i++) {
        int x = i, y = 0;

        while (x >= 0 && y < N)
            mas[y++][x--] = current_num++;
    }

    for (int i = 1; i < N; i++) {
        int x = M - 1, y = i;

        while (x >= 0 && y < N)
            mas[y++][x--] = current_num++;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) std::cout << setw(3) << mas[i][j] << " ";
        std::cout << endl;
    }
}