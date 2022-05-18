#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

vector<bool> used;

void make_matrix(int n, int current, int stage, int padding_1, int padding_2, int padding_3, int padding_4, vector<vector<int>>& mas) {
    if (current > n * n) return;

    if (stage == 0) {
        for (int i = padding_1; i < n - padding_2; i++) {
            mas[padding_3][i] = current++;
        }
        padding_3++;
        stage++;
    }
    else if (stage == 1) {
        for (int i = padding_3; i < n - padding_4; i++) {
            mas[i][n - padding_2 - 1] = current++;
        }
        padding_2++;
        stage++;
    }
    else if (stage == 2) {
        for (int i = n - padding_2 - 1; i > padding_1 - 1; i--) {
            mas[n - padding_4 - 1][i] = current++;
        }
        stage++;
        padding_4++;
    }
    else if (stage == 3) {
        for (int i = n - padding_4 - 1; i > padding_3 - 1; i--) {
            mas[i][padding_1] = current++;
        }
        stage = 0;
        padding_1++;
    }

    make_matrix(n, current, stage, padding_1, padding_2, padding_3, padding_4, mas);
}

int main() {
    int N;
    cin >> N;
    
    vector<vector<int>> matrix(N, vector<int>(N));
    make_matrix(N, 1, 0, 0, 0, 0, 0, matrix);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}