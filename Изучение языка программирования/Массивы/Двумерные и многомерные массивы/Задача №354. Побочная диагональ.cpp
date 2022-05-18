#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> matrix(N, vector<int>(N, 0));

    for (int i = 0; i < N; i++) {
        matrix[N - 1 - i][i] = 1;
        for (int j = i + 1; j < N; j++) {
            matrix[N - 1 - i][j] = 2;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}