#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int N;
    cin >> N;

    if (N == 1) {
        cout << "1";
        return 0;
    }

    vector<vector<int>> mas(N, vector<int>(N, 0));

    int stage = 0;
    int padding_1 = 0, padding_2 = 0, padding_3 = 0, padding_4 = 0;


    while (true) {
        int k = 0;

        if (stage == 0) {
            for (int i = padding_1; i < N - padding_2; i++) {
                k++;
                mas[padding_3][i] = 1;
            }
            stage++;
        }
        else if (stage == 1) {
            for (int i = padding_3; i < N - padding_4; i++) {
                k++;
                mas[i][N - padding_2 - 1] = 1;
            }
            stage++;
        }
        else if (stage == 2) {
            for (int i = N - padding_2 - 1; i > padding_1 - 1; i--) {
                k++;
                mas[N - padding_4 - 1][i] = 1;
            }
            stage++;
            padding_3 += 2;
        }
        else if (stage == 3) {
            for (int i = N - padding_4 - 1; i > padding_3 - 1; i--) {
                k++;
                mas[i][padding_1] = 1;
            }
            stage = 0;
            padding_1 += 2;
            padding_2 += 2;
            padding_4 += 2;

            mas[padding_3][padding_1 - 1] = 1;
        }

        if (k == 0) break;
    }

    mas[N / 2][N / 2] = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) std::cout << mas[i][j];
        std::cout << endl;
    }
}