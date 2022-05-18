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
    vector<vector<int>> new_mas(M, vector<int>(N));


    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> mas[i][j];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            new_mas[j][N - i - 1] = mas[i][j];
        }
    }

    cout << M << " " << N << endl;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) std::cout << new_mas[i][j] << " ";
        std::cout << endl;
    }
}