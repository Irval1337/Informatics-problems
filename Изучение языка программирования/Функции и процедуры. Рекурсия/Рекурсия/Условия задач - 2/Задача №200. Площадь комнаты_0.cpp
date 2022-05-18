#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int f(vector<vector<int>>& matrix, int x, int y) {
    if (matrix[y][x] != 0) return 0;

    int S = 0;
    if (matrix[y][x] == 0) S++;
    matrix[y][x] = 2;
    S += f(matrix, x + 1, y);
    S += f(matrix, x - 1, y);
    S += f(matrix, x, y + 1);
    S += f(matrix, x, y - 1);
    return S;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> matrix;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        vector<int> tmp;
        for (int j = 0; j < n; j++) {
            if (str[j] == '*') tmp.push_back(1);
            else tmp.push_back(0);
        }
        matrix.push_back(tmp);
    }

    int x, y;
    cin >> y >> x;
    cout << f(matrix, x - 1, y - 1);
}